#include <iostream>
#include <algorithm> // trung bình thuật toán =))))))

using namespace std;

int main() {
    long long mang[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    sort(mang, mang + n); // không biết tại sao khi sort thì tham số thứ 2 phải là mảng cộng cho số phần tử nữa ;-;

    for (int i = 0; i < n; i++) {
        cout << mang[i] << " ";
    }

    return 0;
}