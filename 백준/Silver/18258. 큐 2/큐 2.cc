#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

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
                cout << q.front() << "\n";
                q.pop();
            }
            else
            {
                // 큐가 비어있는 경우
                cout << "-1"  << "\n";
            }
        }
        else if (cmd == "size")
        {
            cout << q.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (q.empty())
            {
                cout << "1"  << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (cmd == "front")
        {
            if (q.size() != 0)
            {
                cout << q.front()  << "\n";
            }
            else
            {
                // 큐가 비어있는 경우
                cout << "-1"  << "\n";
            }
        }
        else if (cmd == "back")
        {
            if (q.size() != 0)
            {
                cout << q.back()  << "\n";
            }
            else
            {
                // 큐가 비어있는 경우
                cout << "-1"  << "\n";
            }
        }
    }
    return 0;
}