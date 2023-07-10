#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    //시간 줄이기용 코드
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;
    string cmdlist;
    
    int num_push = 1;
    int arr_idx = 0;

    for (int i = 0; i < n; i++)
    {
        while (s.empty() || s.top() != arr[i])
        {
            //스택이 빈 동안 (맨 처음) 또는 s.top이 arr값과 같지 않은 동안만 수행
            if (num_push > n + 1)
            {
                //push할 숫자가 커지면 더이상 수열을 만들 수 없다는 뜻
                // -> NO
                cout << "NO" << endl;
                return 0;
            }
            s.push(num_push);
            num_push++;
            cmdlist += '+';
        }

        s.pop();
        cmdlist += '-';
    }

    for (char cmd : cmdlist)
    {
        cout << cmd << '\n';
    }

    return 0;
}
