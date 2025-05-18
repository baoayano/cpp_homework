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
        int d = X[i];
        while (d > 0) {
            if (d == 1) c = false;

            for (int x = 2; x < floor(sqrt(d)); x++) {
                if (d % x == 0) {
                    c = false;
                    break;
                }
            }

            if (c == false) break;
            d = floor(d / 10);
        }

        if (c) {
            s = s + X[i];
        }
    }

    cout << s << endl;
}