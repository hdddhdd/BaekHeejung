#include <iostream>
using namespace std;
int arr[10];
int main()
{

    int N;
    cin >> N;

    int temp = 0; // 몫
    temp = N;
    int temp_remain = 0; // 나머지
    while (temp != 0)
    {
        temp_remain = temp % 10;
        if (temp_remain == 6 || temp_remain == 9)
        {
            if (arr[6] > arr[9])
            {
                arr[9]++;
            }
            else
            {
                arr[6]++;
            }
        }
        else
        {
            arr[temp_remain]++;
        }

        temp = temp / 10;
    }
    int max = 0;
    max = arr[0];
    for (int i = 1; i <= 9; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}