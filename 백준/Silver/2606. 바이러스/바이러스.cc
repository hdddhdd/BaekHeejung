#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int c[100];         // 방문처리
vector<int> a[101]; // 각 노드의 인덱스가 1부터 시작될 수 있도록해서 8칸 차지하도록
    int cnt = 0;

void bfs(int start)
{
    queue<int> q;
    q.push(start);   // 큐에 넣어주기
    c[start] = true; // 방문처리

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        // cout << x << " \n";
        cnt++;
        for (int i = 0; i < a[x].size(); i++)
        {
            // 큐에서 꺼낸 인접한 노드들 방문
            int y = a[x][i];
            if (!c[y])
            {
                // 방문하지 않았다면
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main(){
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);

    int n;
    int pair;

    cin >> n;
    cin >> pair;

    int x1, x2;
    for (int i = 0; i < pair; i++){
        cin >> x1 >> x2;

        a[x1].push_back(x2);
        a[x2].push_back(x1);
    }

    bfs(1);

    cout << cnt-1 <<"\n";



    return 0;
}