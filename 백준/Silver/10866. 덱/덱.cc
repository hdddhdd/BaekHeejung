#include <iostream>
#include <deque>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N;
    cin >> N;

    string cmd;
    int cmd_number;

    deque<int> d;

    for (int i = 0; i < N; i++)
    {
        cin >> cmd;

        if (cmd == "push_front")
        {
            cin >> cmd_number;
            d.push_front(cmd_number);
        }
        else if (cmd == "push_back")
        {
            cin >> cmd_number;
            d.push_back(cmd_number);
        }
        else if (cmd == "pop_front")
        {
            if (d.size() == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << "\n";
                d.pop_front();
                ;
            }
        }
        else if (cmd == "pop_back")
        {
            if (d.size() == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (cmd == "size")
        {
            cout << d.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (d.size() == 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (cmd == "front")
        {
            if (d.size() == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << "\n";
            }
        }
        else if (cmd == "back")
        {
            if (d.size() == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << "\n";
            }
        }
    }

    return 0;
}