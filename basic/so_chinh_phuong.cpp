#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Nhập số nguyên dương nha :3" << endl;
        return 1;
    } else if (n < 4) {
        cout << "Không có số chính phương nha!" << endl;
        return 1;
    }

    for (int i = 4; i < n; i++) {
        // tính căn bậc 2
        double r = sqrt(i);
        // ép kiểu
        int r1 = (int)r;
        // kiểm tra bình phương của số vừa làm tròn của bằng i không
        if (r1 * r1 == i) {
            cout << i << " ";
        }
    }
    return 0;
}