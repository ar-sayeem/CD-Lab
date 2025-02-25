line = input("Enter a line: ")
n = len(line)

if n > 1 and line[0] == '#':
    print("single line comment")
elif n >= 6 and ((line[:3] == "'''" and line[-3:] == "'''") or (line[:3] == '"""' and line[-3:] == '"""')):
    print("multi-line comment")
else:
    print("not a comment")
