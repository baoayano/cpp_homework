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

    long long max = mang[0];
    for (int i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }

    cout << max;
    return 0;
}