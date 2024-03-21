#include<iostream>
using namespace std;


int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T; 

    int N;
    int fibo[42][2];
    fibo[0][0] = 1;
    fibo[0][1] = 0;
    fibo[1][0] = 0;
    fibo[1][1] = 1;

    for (int i = 2; i < 41; i++){
        fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];        
    }

    for (int i = 0; i < T; i++){
        cin >> N;
        cout<< fibo[N][0] << " " << fibo[N][1] <<endl;
    }
   return 0;
}

