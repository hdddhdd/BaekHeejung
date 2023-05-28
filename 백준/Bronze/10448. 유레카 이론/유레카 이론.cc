#include <iostream>
#include <vector>
using namespace std;

vector<int> total;
vector<int> cal_total(1001);

void maketotal(int size)
{
    int num = 1;
    for (int i = 1; i <= size; i++)
    {
        total.push_back(num);
        num += (i + 1);
    }
}

int check(int K)
{
    if (cal_total[K] != 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    maketotal(1000);
    for (int i = 0; i < total.size(); i++)
    {
        for (int j = i; j < total.size(); j++)
        {
            for (int k = j; k < total.size(); k++)
            {
                int check = total[i] + total[j] + total[k];

                if (check > 1000)
                    break;

                cal_total[check] = 1;
            }
        }
    }

    int T;
    cin >> T;

    int K[1001];
    for (int i = 0; i < T; i++)
    {
        cin >> K[i];
    }
    for (int i = 0; i < T; i++)
    {
        cout << check(K[i]) <<endl; 
    }

    return 0;
}