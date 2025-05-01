#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    string sum_string = to_string(sum); // em dùng thư viện string, chuyển từ số nguyên sang xâu
    cout << sum_string << endl;
    for (int i = 0; i < sum_string.length(); i++) {
        if (i == (sum_string.length() - 2) || i == (sum_string.length() - 1)) {
            cout << sum_string[i] << " ";
        }
    }
    return 0;
}