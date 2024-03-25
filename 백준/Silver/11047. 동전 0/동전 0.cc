#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    int N, K;
    cin >> N >> K;
    int cnt = 0;
    vector<int> coin(N + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> coin[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (coin[i] <= K)
        {
            while (K > 0)
            {
                K = K - coin[i];
                cnt++;
                // cout<<"cnt: " <<cnt<<endl;
                if (K == 0)
                {
                    break;
                }
                else if (K <0){
                    K = K+coin[i];
                    cnt--;
                    // cout<<"cnt: " <<cnt<<endl;
                    break;
                }
                
            }
        }
        // if (K <= 0)
        // {
        //     break;
        // }
    }
    cout << cnt << endl;

    return 0;
}