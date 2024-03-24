#include<iostream>
using namespace std;
#include <vector>
int main(int argc, char** argv)
{
    int n;
    cin >> n;

    vector<int> dp(1002);
    dp[1] = 1;
    dp[2] = 3;

    //10007로 나눈 나머지   
    for (int i = 3; i<=n; i++){
        dp[i] = (dp[i-1] + 2* dp[i-2]) % 10007;
    }

    cout << dp[n] <<endl;
   return 0;
}
