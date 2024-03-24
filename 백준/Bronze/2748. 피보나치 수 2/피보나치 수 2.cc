#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
vector<ll> fibo(92);
ll FIBO(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        fibo[i + 1] += fibo[i];
        fibo[i + 2] += fibo[i];
    }

    return fibo[n];
}
int main(int argc, char **argv)
{
    fibo[0] = 0;
    fibo[1] = 1;
    int n;
    cin >> n;
    cout << FIBO(n) << endl;
    return 0;
}