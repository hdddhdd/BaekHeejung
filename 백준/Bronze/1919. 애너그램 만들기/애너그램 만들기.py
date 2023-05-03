# part1 - 230503
# ord(), chr() -> 아스키코드 변환 관련 함수들
list = [0 for i in range(26)]
s1 = input()
s2 = input()

for c in s1:
    list[ord(c) - ord('a')] += 1
for c in s2: 
    list[ord(c)-ord('a')] -=1

for x in range(len(list)):
    list[x] = abs(list[x])
print(sum(list))