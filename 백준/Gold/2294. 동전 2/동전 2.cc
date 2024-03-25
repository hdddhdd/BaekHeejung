#include<iostream>
// #include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    int n, k;
    cin >> n >> k;

    vector<int> coin(n+2,0);
    vector<int> dp(10002, 100001);

    for (int i = 1; i<= n; i++){
        cin >> coin[i];
        if (coin[i] <= k){
            dp[coin[i]] = 1;
        }
    }
    
    for (int i = 1; i<= k; i++){

        for (int j = 1; j<=n; j++){
            if (i + coin[j] <=k){
                // cout << dp[i+coin[j]] << " " <<dp[i]+1<< endl;
                dp[i+coin[j]] = min(dp[i+coin[j]], dp[i]+1);
            //    cout<<"=> dp[" <<i+coin[j] <<"]="<<dp[i+coin[j]] <<endl;
            }
        }
    }

    if (dp[k] == 100001){
        cout << "-1\n";
    }
    else{
        cout << dp[k] <<endl;

    }
    return 0;
}
