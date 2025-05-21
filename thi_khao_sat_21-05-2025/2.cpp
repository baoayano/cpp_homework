#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool exist = false;
    while (exist == false) {
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                count++;
                exist = true;
            }

            if (count > 1) {
                exist = false;
                break;
            }
        }

        if (!exist) n++;
    }

    cout << n;

    return 0;
}