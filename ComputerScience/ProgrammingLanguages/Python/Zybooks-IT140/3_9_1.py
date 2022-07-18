#Create a conditional expression that evaluates to string "negative" if user_val is less than 0, and "non-negative" otherwise.

#Sample output with input -9
#-9 is negative

user_val = int(input())
print(f'{user_val} is {"negative" if user_val < 0 else "non-negative"}')
