#include <iostream>
#include <stack>

using namespace std;

int arr[1000001];
int result[1000001];

int main() {
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    stack<int> s;

    for (int i = 0; i < N; i++) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty()) {
        result[s.top()] = -1;
        s.pop();
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}
