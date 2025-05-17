#include <iostream>
#include <math.h>
using namespace std;

bool ktra(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (ktra(a, n) == true) {
        cout << "Là dãy đối xứng";
    } else {
        cout << "Không phải dãy đối xứng";
    }

    return 0;
}