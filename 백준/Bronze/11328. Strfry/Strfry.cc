#include <iostream>
using namespace std;

#include <sstream>
int check_first[27];
int check_second[27];
int result[1002];
int main()
{

    int N;
    cin >> N;

    string s;
    string s_split[2];
    int idx = 0;

    stringstream ss;
    string tmp;
    int idx_result = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> s_split[0] >> s_split[1];

        for (int i = 0; i < s_split[0].size(); i++)
        {
            check_first[s_split[0][i] - 97]++;
        }
        for (int i = 0; i < s_split[0].size(); i++)
        {
            check_second[s_split[1][i] - 97]++;
        }
        int temp_result=0;

        for (int i = 0; i < 26; i++)
        {
            if (check_first[i] != check_second[i])
            {
                temp_result = 1;
            }
        }

        idx = 0;
        for (int i = 0; i < 26; i++)
        {
            check_first[i] = 0;
            check_second[i] = 0;
        }
        result[idx_result++] = temp_result;
    }

    for (int i = 0; i < N; i++)
    {

        if (result[i] == 0)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}