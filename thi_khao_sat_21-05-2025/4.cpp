#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max, maxht = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            maxht++;
        } else if (maxht > max) {
            max = maxht;
            maxht = 1;
        }
    }

    cout << max;
    return 0;
}