#include <iostream>
using namespace std;

int main() {
    int mang[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) {
            cout << mang[i] << " ";
        }
    }

    return 0;
}