#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 1; i <= n; i++) {
        if (a[i - 1] != a[i]) {
            cout << a[i - 1];
        }
    }
    
    return 0;
}