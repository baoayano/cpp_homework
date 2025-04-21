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
    int c = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i - 1] != a[i]) {
            c++;
        }
    }

    cout << c;
    
    return 0;
}