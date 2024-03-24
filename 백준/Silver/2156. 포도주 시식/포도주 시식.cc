#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(int argc, char** argv)
{
    int n;
    cin >> n;

    vector<int> wine(n+1);
    for (int i = 1;i <= n;i++){
        cin >> wine[i];
    }
    vector<vector<int>>dp(3, vector<int>(n+1));

    dp[0][1] = 0;
    dp[1][1] = wine[1];
    dp[2][1] = wine[1];

    for (int i = 2; i<=n; i++){
        //i번째를 선택하지 않은 경우
        dp[0][i] = max(max(dp[0][i-1], dp[1][i-1]), dp[2][i-1]);
        //i-1번째를 선택하지 않고 i번째를 선택
        dp[1][i] = dp[0][i-1] + wine[i];
        //i-1번째를 선택하고 i번째를 선택
        dp[2][i] = dp[1][i-1] + wine[i];
    }

    cout <<max(max(dp[0][n], dp[1][n]), dp[2][n]) <<endl;;
    
   return 0;
}
