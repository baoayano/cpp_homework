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

    bool c = true;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                for (int x = (j + 1); x < n; x++) {
                    if (a[i][x] != a[x][i]) {
                        c = false;
                        break;
                    }
                }
            }
        }
    }

    if (c == true) {
        cout << "Mảng đối xứng qua đường chéo chính";
    } else {
        cout << "Mảng không đối xứng qua đường chéo chính";
    }
}