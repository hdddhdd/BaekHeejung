#재귀로 풀면 런타임 에러남
n,k = input().split()
n = int(n)
k = int(k)
dp = [[0 for _ in range(n+1)] for _ in range(n+1)]


minus_val = int(n-k)

for i in range(0, n+1):
    for j in range(0, n+1):
        if j == 0:
            dp[i][j] = 1
        elif i == j:
            dp[i][j] = 1
        elif j == 1:
            dp[i][j] = i
        elif n >= k:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j]

print(int(dp[n][k] % 10007))
