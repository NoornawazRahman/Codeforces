#!/usr/bin/env python3

import requests

def get_solved_by_rating(handle):
    # Call Codeforces API for user status
    url = f"https://codeforces.com/api/user.status?handle={handle}"
    response = requests.get(url).json()

    if response["status"] != "OK":
        print("Error fetching data from Codeforces API")
        return

    submissions = response["result"]
    solved = {}  # rating -> set of problems

    for sub in submissions:
        if sub["verdict"] == "OK":
            problem = sub["problem"]
            rating = problem.get("rating")

            if rating:
                # Use problem name + contest id to avoid duplicate counting
                key = f"{problem['contestId']}-{problem['index']}"
                if rating not in solved:
                    solved[rating] = set()
                solved[rating].add(key)

    # Final count
    solved_count = {rating: len(problems) for rating, problems in solved.items()}
    return solved_count


if __name__ == "__main__":
    handle = input("Enter your Codeforces handle: ")
    solved_by_rating = get_solved_by_rating(handle)

    if solved_by_rating:
        print(f"\nSolved problems by rating ({handle}):")
        for rating in sorted(solved_by_rating):
            print(f"  Rating {rating}: {solved_by_rating[rating]} problems")
