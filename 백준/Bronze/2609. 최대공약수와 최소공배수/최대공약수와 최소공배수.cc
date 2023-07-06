#include <iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{

    int a;
    int b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;

    return 0;
}

// 최대공약수
int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

// 최소공배수
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}