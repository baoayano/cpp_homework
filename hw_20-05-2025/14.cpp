#include <iostream>
using namespace std;

int so_tuong_dong(int min, int max) {
    int m = 0;
    for (int i = min; i <= max; i++) {
        string smin = to_string(i);
        int sum_min = 0;
        for (int x = 0; x < smin.size(); x++) {
            int imin = smin[x] - '0';
            sum_min = sum_min + imin;
        }

        for (int j = min; j <= max; j++) {
            if (i == j) continue;

            string smin2 = to_string(j);
            int sum_min2 = 0;
            for (int x = 0; x < smin2.size(); x++) {
                int imin = smin2[x] - '0';
                sum_min2 = sum_min2 + imin;
            }

            if (sum_min == sum_min2) {
                if ((i - j) > m) {
                    m = abs(i - j);
                }
            }
        }
    }

    return m;
}

int main() {
    int l,r;
    cin >> l >> r;

    cout << so_tuong_dong(l, r);

    return 0;
}