#include <iostream>
#include <deque>
using namespace std;

deque<int> dq;
int arr[50];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    int cnt = 0;

    for (int i = 0; i < M; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        dq.push_back(i);
    }

    int arr_idx = 0;
    deque<int>::iterator iter = dq.begin();

    int check = 0; // 어디로 가는게 더 빠른지 체크용
    while (arr_idx != M)
    {

        if (dq.front() == arr[arr_idx])
        {
            arr_idx++;
            dq.pop_front();
        }
        else
        {
            for (iter = dq.begin(); iter != dq.end(); ++iter)
            {
                if (*iter == arr[arr_idx])
                {
                    break;
                }
                else
                {
                    check++;
                }
            }
            if (check > dq.size() / 2)
            {
                //뒤에 있는거 앞으로 빼는게 낫다!
                for (int i = 0; i < dq.size() - check; i++)
                {
                    dq.push_front(dq.back());
                    dq.pop_back();
                    cnt++;
                }
            }
            else
            {
                //앞에 있는거 뒤로 빼는게 낫다!
                for (int i = 0; i < check; i++)
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                    cnt++;
                }
            }
            check = 0;
        }
    }

    cout << cnt << "\n";
    return 0;
}