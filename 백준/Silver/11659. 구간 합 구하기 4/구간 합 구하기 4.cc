#include <iostream>
using namespace std;
int arr[100000]; // 원래 배열
int sum[100000]; // 누적합 배열

int main()
{

    int N;
    int M;
    cin >> N;
    cin >> M;

    int I[100000];
    int J[100000];

    // int temp_sum = 0;
    sum[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        // temp_sum += arr[i];
        // sum[i] = temp_sum;
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 1; i <= M; i++)
    {
        cin >> I[i] >> J[i];
    }
    for (int i = 1; i <= M; i++)
    {
        cout << (sum[J[i]] - sum[I[i] - 1]) << '\n';
    }
    return 0;
}
