#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N;
    cin >> N;

    stack<pair<int,int> > s;

    int H;
    for (int i = 1; i <=N; i++){
        cin >> H;

        while (!s.empty()){
            if (s.top().second > H ){
                //바로바로 출력하기
                cout << s.top().first << ' ';
                break;
            }
            s.pop(); 
        }

        if (s.empty()){
            cout << "0 ";
        }

        s.push( {i, H} );
    }


    return 0;
}