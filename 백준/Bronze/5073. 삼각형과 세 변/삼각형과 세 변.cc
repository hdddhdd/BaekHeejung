#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a, b, c;
    a = 1;
    b = 1;
    c = 1;

    int max_val = 0;
    int sum = 0;

    while (true)
    {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        sum = a + b + c;
        max_val = max(a, b);
        max_val = max(max_val, c);

        if (a == b && b == c)
        {
            cout << "Equilateral" << endl;
        }
        else if ((a != b && b != c && a != c) && (max_val < sum - max_val))
        {
            cout << "Scalene" << endl;
        }
        else if (((a == b && b != c) || (a == c && b != c) || (b == c && a != b))&& (max_val < sum - max_val))
        {
            cout << "Isosceles" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}