#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(3) << (a + b) << endl;
    cout << fixed << setprecision(3) << (a - b) << endl;
    cout << fixed << setprecision(3) << (a * b) << endl;
    cout << fixed << setprecision(3) << (a / b) << endl;

    return 0;
}