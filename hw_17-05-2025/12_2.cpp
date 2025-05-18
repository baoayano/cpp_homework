#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
    int n, s;
    cin >> n;
    int X[n];

    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    for (int i = 0; i < n; i++) {
        bool c = true;
        for (int x = 2; x < floor(sqrt(X[i])); x++) {
            if (X[i] % x == 0) {
                c = false;
                break;
            }
        }

        if (c) {
            s = s + X[i];
        }
    }

    cout << s << endl;

    return 0;
}