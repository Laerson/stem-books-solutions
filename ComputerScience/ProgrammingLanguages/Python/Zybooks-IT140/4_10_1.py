user_score = 0
simon_patttern = input()
user_pattern = input()

for i, j in zip(simon_patttern, user_pattern):
    if i == j:
        user_score += 1

print("User score:", user_score)
