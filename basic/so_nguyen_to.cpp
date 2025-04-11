#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "Lớn hơn 2 mới nhận nha :3" << endl;
        return 1;
    }

    for (int i = 2; i < n; i++) {
        bool isPrime = true;
        for (int a = 2; a < i; a++) {
            if (i % a == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}