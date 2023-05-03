# part1 - 230503
inputstr = input()
# outputstr = inputstr.swapcase()
# print(outputstr)
answer = ""
for c in inputstr:
    if c.isupper():
        answer += c.lower()
        #print(answer)
    else:
        answer += c.upper()
        #print(answer)

print(answer)
