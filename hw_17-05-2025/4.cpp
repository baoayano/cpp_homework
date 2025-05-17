#include <iostream>
using namespace std;

int ktra(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            bool c = true;
            int d[n - j];

            if ((n - j) < 2) continue;

            for (int x = 0; x < (n - j); x++) {
                d[x] = a[x + i];
            }

            for (int x = 0; x < (n - j); x++) {
                if (d[x] != d[(n - j) - 1 - x]) {
                    c = false;
                    break;
                }
            }

            if (c == true) {
                dem = dem + 1;
            }
        }
    }

    return dem;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << ktra(a, n);

    return 0;
}