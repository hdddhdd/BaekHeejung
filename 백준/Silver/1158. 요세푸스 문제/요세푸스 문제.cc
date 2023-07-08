#include <iostream>
#include <list>
using namespace std;
int del();
int N, K;
int n;
list<int> li;
list<int>::iterator iter;

// 현재위치 저장용 int형변수
int current = 0;
int main()
{
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        li.push_back(i);
    }

    iter = li.begin();

    cout << "<";

    while (li.size() > 1)
    {
        for (int i = 0; i < K - 1; i++)
        {
            // K씩 이동시킴.
            iter++;
            if (iter == li.end())
                iter = li.begin(); // [중요] 마지막 = 처음으로 보내기
        }
        cout << *iter << ", ";

        iter = li.erase(iter); // iter가 다음 원소를 가리키게됨.
        //기존에 iterator가 가리키던 원소 삭제 후 
        //iterator가 다음 원소를 가리키게 되면 그 원소가 list의 마지막일 수 있음. 
        if (iter == li.end())
            iter = li.begin(); // 삭제하다가도 마지막 = 처음으로 보내기
    }


    //마지막 남은 하나
    cout << *iter << ">" << endl;
    return 0;
}
