#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s;
    list<char> password;

    for (int i = 0; i < N; i++) {
        cin >> s;

        password.clear();  // 비밀번호 초기화
        list<char>::iterator iter = password.begin();  // 비밀번호를 관리할 iterator

        for (char ch : s) {
            if (ch == '<') {
                if (iter != password.begin()) {
                    --iter;
                }
            } else if (ch == '>') {
                if (iter != password.end()) {
                    ++iter;
                }
            } else if (ch == '-') {
                if (iter != password.begin()) {
                    iter = password.erase(--iter);
                }
            } else {
                password.insert(iter, ch);
            }
        }

        // 비밀번호 출력
        for (char ch : password) {
            cout << ch;
        }
        cout << '\n';
    }

    return 0;
}
