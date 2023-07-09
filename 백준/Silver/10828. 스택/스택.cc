#include <iostream>
#include <stack>

using namespace std;

int main()
{

    int N;
    cin >> N;

    stack<int> s1;
    string cmd;
    int cmd_num;
    for (int i = 0; i < N; i++)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            cin >> cmd_num;
            s1.push(cmd_num);
        }
        else if (cmd == "pop")
        {
            if (s1.size() == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << s1.top() << endl;
                s1.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << s1.size() << endl;
        }
        else if (cmd == "empty")
        {
            if (s1.empty())
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else if (cmd == "top")
        {
            if (s1.size() == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << s1.top() << endl;
            }
        }
    }

    // cout << cmd_num << endl;

    return 0;
}