import sys

w,h = map(int,sys.stdin.readline().split())
p,q = map(int,sys.stdin.readline().split())
t = int(input())



P = (p + t) % (2 * w)
Q = (q + t) % (2 * h)
if P > w:
    P = 2 * w - P
if Q > h:
    Q = 2 * h - Q

print(P, Q)