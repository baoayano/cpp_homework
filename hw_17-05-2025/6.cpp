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

    int dem = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (((i + 1) % 2 == 0) && (a[i][j] % 2 != 0)) {
                dem = dem + 1;
            }
        }
    }

    cout << dem << endl;
}