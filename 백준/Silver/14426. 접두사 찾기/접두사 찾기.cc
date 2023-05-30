// 시간 더 빠름
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

string S[10000];
string C[10000]; // check해야 하는 문자열

int result = 0;
// void check(string s, string c)
// {
//     result = 0;
//     for (int i = 0; i < static_cast<int>(c.length()); i++)
//     {
//         if (s[i] != c[i])
//         {
//             result = 1; // 다른게 발견되면 1임.
//             break;
//         }
//     }
// }
bool comp(string s1, string s2)
{
    return s1 < s2; // string 사전 역순
}

int main()
{
    int visit[10000];

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> C[i];
    }

    sort(S, S + n, comp);
    sort(C, C + m, comp);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (!visit[j]) // 그리고 C[j]가 visitede된거여야만 들어갈 수 있음
            {
                // 방법 1
                //  check(S[i], C[j]);

                // 방법 2
                //  char chars[S[i].length() + 1];
                //  strcpy(chars, S[i].c_str());
                //  char charc[C[j].length() + 1];
                //  strcpy(charc, C[j].c_str());
                //  if (strncmp(chars, charc, C[j].length()) == 0)
                //  {
                //      // 둘이 같으면 0
                //      // return 0;
                //      cnt++;
                //      visit[j] = 1;
                //  }

                bool check = true;
                for (int k = C[j].length() - 1; k >= 0; k--)
                {
                    if (S[i][k] != C[j][k])
                    {
                        // 같지 않은 부분이 있으면 바로 false가 됨.
                        check = false;
                        break;
                    }
                }

                if (check)
                {
                    // cnt = cnt+1;
                    cnt++;
                    
                    // cout << "-> " << C[j] << " " << endl;
                    visit[j] = 1;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}