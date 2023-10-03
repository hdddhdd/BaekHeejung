#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int grapharr[1001][1001] = {
    0,
};
bool visited[1001] = {};
int N, M, V;

void DFS(int startV)
{
    visited[startV] = true;
    cout << startV << " ";
    for (int i = 1; i <= N; i++)
    {
        if (grapharr[startV][i] == 1 && visited[i] == 0)
        {
            // 아직 방문하지 않았고 연결된 정점일 때
            DFS(i);
        }
    }
}

void BFS(int startV)
{
    queue<int> q;
    q.push(startV);
    visited[startV] = true;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int i = 1; i <= N; i++)
        {
            if (grapharr[current][i] == 1 && visited[i] == 0)
            {
                // 아직 방문하지 않았고 연결된 정점일 때
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main()
{

    cin >> N >> M >> V;

    int a, b;
    visited[V] = 1;

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;

        grapharr[a][b] = 1;
        grapharr[b][a] = 1;
    }
    DFS(V);
    cout << "\n";

    memset(visited, false, sizeof(visited));

    BFS(V);

    return 0;
}
