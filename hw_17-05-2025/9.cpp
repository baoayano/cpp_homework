#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                for (int x = (j + 1); x < n; x++) {
                    tong = tong + a[i][x];
                }
            }
        }
    }

    cout << tong << endl;
}