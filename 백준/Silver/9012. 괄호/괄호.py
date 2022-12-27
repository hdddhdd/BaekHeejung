num = int(input())

for i in range(num):
    stack = []
    my_input = input()
    for c in my_input:
        # ( 이면 스택에 넣기
        if c == '(':
            stack.append(c)
        elif c == ')':
            if stack:
                stack.pop()
            else:
                print("NO")
                break
    #stack 에 결과적으로 아무것도 없다면 (다 pop 되었다면) YES
    else:
        if not stack:
            print("YES")
        else:
            print("NO")