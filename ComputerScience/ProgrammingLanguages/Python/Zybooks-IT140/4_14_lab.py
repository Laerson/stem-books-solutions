user_text = input()
count = 0
for i in user_text:
    if i not in (" .,"):
        count += 1
print(count)
