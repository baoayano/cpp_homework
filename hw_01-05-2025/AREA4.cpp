#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double h = sqrt((c*c) - ((a - b)/2)*((a - b)/2));
    // 0.25 = 1/4
    double r = 0.25 * h;
    double s1 = ((a + b)/2) * h;
    double s2 = 3.14 * r * r;
    double s = s1 - s2;
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}