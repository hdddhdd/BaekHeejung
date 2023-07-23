#include <iostream>
using namespace std;

int main()
{
    int T;
    int N;
    int M;
    cin >> T;

    int a = 1; // 분자
    int b = 1; // 분모
    long long result = 1;

    for (int i = 0; i < T; i++)
    {
        result = 1;
        cin >> N >> M;

        int r = 1;
        for (int j = M; j > M - N; j--)
        {
            result = result * j;
            result = result / r;
            r++;
        }
        cout << result << "\n";
    }

    return 0;
}