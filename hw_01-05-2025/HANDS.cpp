#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0;

    for (int i = 1; i < n; i++) {
        s = s + (n - i);
        // cái này em giả sử có n người bắt tay
        // người bắt tay thứ nhất sẽ bắt tay với (n - 1) người còn lại => (n - 1) lượt
        // người bắt tay thứ hai sẽ bắt tay với (n - 2) người còn lại => (n - 2) lượt
        // => liên tiếp
    }

    cout << s << endl;
    return 0;
}