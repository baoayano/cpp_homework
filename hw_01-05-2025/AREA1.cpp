#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double a;
    cin >> a;
    double s1 = (a*a*sqrt(3)) / 4;
    double r = (a*sqrt(3)) / 6;
    double s2 = 3.14 * r * r;
    double s = s1 - s2;

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}