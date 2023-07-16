#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    int N;
    cin >> N;

    string cmd;
    int cmd_number;

    for (int i = 0; i < N; i++)
    {

        cin >> cmd;
        if (cmd == "push")
        {
            cin >> cmd_number;
            q.push(cmd_number);
        }
        else if (cmd == "pop")
        {
            if (q.size() != 0)
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                // 큐가 비어있는 경우
                cout << "-1" << endl;
            }
        }
        else if (cmd == "size")
        {
            cout << q.size() << endl;
        }
        else if (cmd == "empty")
        {
            if (q.empty())
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else if (cmd == "front")
        {
            if (q.size() != 0)
            {
                cout << q.front() << endl;
            }
            else
            {
                // 큐가 비어있는 경우
                cout << "-1" << endl;
            }
        }
        else if (cmd == "back")
        {
            if (q.size() != 0)
            {
                cout << q.back() << endl;
            }
            else
            {
                // 큐가 비어있는 경우
                cout << "-1" << endl;
            }
        }

        // cout << cmd << " " << cmd_number <<endl;
    }

    return 0;
}