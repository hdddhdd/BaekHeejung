#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int Rev(int a);

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int rev_a = Rev(a);
    int rev_b = Rev(b);
    int sum = rev_a + rev_b;

    cout << Rev(sum) << endl;

    return 0;
}

int Rev(int a)
{
    string s = to_string(a);
    reverse(s.begin(), s.end());
    a = atoi(s.c_str());
    return a;
}
