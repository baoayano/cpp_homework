#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int mang[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    int min = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] < mang[min]) {
            min = i;
        }
    }

    cout << min;
    return 0;
}