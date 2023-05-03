# part1 - 230503
# Counter 모듈 사용
from collections import Counter

s = input()
counter = Counter(s.upper())

if (len(counter) > 1) and (counter.most_common()[0][1] == counter.most_common()[1][1]):
    print('?')
else:
    print(counter.most_common()[0][0])