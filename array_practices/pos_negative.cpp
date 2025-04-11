#include <iostream>
using namespace std;

int main() {
    long long mang[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    for (int i = 0; i < n; i++) {
        if (mang[i] < 0) {
            cout << i << " ";
        }
    }

    return 0;
}