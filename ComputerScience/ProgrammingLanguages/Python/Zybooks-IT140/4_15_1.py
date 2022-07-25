password = input()

new_pass = ''

for c in password:
    if c == 'i':
        new_pass += '!'
    elif c == 'a':
        new_pass += '@'
    elif c == 'm':
        new_pass += 'M'
    elif c == 'B':
        new_pass += '8'
    elif c == 'o':
        new_pass += '.'
    else:
        new_pass += c

print(new_pass)
