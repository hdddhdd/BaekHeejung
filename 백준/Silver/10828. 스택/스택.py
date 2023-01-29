import sys
N = int(sys.stdin.readline())
# N = int(input())

stack = []

for _ in range(N):
    word = sys.stdin.readline().split()
    cmd = word[0]

    if cmd == "push":
        push_num = word[1]
        stack.append(push_num)
    elif cmd == "pop":
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())
    elif cmd == "size":
        print(len(stack))
    elif cmd == "empty":
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif cmd == "top":
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[len(stack)-1])