#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long mang[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    long long sum_negative = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] < 0) {
            sum_negative = sum_negative + mang[i];
        }
    }

    cout << sum_negative;
    return 0;
}