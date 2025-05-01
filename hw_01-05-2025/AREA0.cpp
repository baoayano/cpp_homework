#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double r = a / 2;
    double s1 = a * b;
    double s2 = 3.14 * r * r;
    double s = s1 - s2;

    cout << s << endl;

    return 0;
}