#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n;
    int X[n];

    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    for (int i = 0; i < n; i++) {
        s = s + X[i];
    }

    cout << s << endl;
}