#include <iostream>
using namespace std;

int main() {
    int N, SN = 0;
    cin >> N;
    int a[N], b[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        bool done = false;

        SN = SN + 1;
        b[i] = a[i];

        for (int j = SN; j < (N - SN); j++) {
            if (a[j - i - 1] != a[j]) {
                done = true;
                break;
            }
        }

        if (done == false) {
            break;
        }
    }

    cout << SN << endl;
}