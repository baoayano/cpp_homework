#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t = 0;
    for (int i = 1; i <= n; i++) {
        t = t + i;
    }
    cout << t << endl;
    return 0;
}