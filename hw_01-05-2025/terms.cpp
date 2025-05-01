#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // câu hỏi 1
    int s1 = 0;
    for (int i = ((n - 1) / 2); i <= n; i++) {
        s1++;
    }
    // câu hỏi 2
    int s2 = 0;
    for (int i = (n + 1); i <= (n * n); i++) {
        s2++;
    }
    cout << s1 << endl << s2 << endl;
    return 0;
}