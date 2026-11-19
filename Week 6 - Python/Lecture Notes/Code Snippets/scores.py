# Find the average of scores

scores = []
for i in range(3):
    score = int(input("Score: "))
    scores.append(score)

average = sum(scores) / len(scores)
print(f"Average: {average}")


"""
Terminal Output
$ python3 scores.py
Score: 7
Score: 12
Score: 8
Average: 9.0
"""