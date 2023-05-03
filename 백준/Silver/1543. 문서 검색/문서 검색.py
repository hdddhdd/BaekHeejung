# part1 - 230503
idx = 0
cnt = 0

s1 = input()
s2 = input()
len_s2 = len(s2)

def findidx(s1,s2):
    global cnt
    global idx
    idx = s1.find(s2)
    if (idx == -1):
        return 0
    else:
        cnt = cnt +1
        s1 = s1[idx+len_s2:]
        findidx(s1,s2)
    return cnt


print(findidx(s1,s2))

