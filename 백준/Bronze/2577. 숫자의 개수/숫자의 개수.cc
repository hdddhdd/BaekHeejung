#include <iostream>
using namespace std;

int check[10];

int main(){
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    int result = 0;
    result = A * B * C;

    int idx_check = 0;
    //int temp_m = 0; //몫 저장
    int temp_n = 0; //나머지 저장
    while (result != 0){
        temp_n = result %10;
        result = result/10;
        
        check[temp_n]++; 
    }


    for (int i =0; i <=9; i++)
    {
        cout << check[i] <<endl;
    }
    return 0;
}