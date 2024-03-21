#include<iostream>
using namespace std;
#include <cmath>

int main(int argc, char** argv)
{
    int M, N;
    cin >> M >> N;

    double sqrt_val = 0.0;
    int min_val = 0;
    int check =0;
    int result = 0;
    for (int i = M; i<= N; i++){
        sqrt_val = sqrt(i);
        if (sqrt_val == floor(sqrt_val)){
            result = result + i;
            if (check == 0){
                min_val = i;
                check =1;
            }
        }
    }

    if (result == 0){
        cout << "-1\n";
    }else{
    cout << result <<endl;
            cout << min_val <<endl;

    }
    
   return 0;
}