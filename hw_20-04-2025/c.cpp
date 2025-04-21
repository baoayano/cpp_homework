#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[1000], b[1000], c[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int n1 = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] != a[i - 1]) {
            b[n1] = a[i - 1];
            n1++;
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                c[i]++;
            }
        }
    }

    for (int i = 0; i < n1; i++) {
        cout << b[i] << ": " << c[i] << endl;
    }
    
    return 0;
}