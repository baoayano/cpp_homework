#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b > a) {
        int x = b;
        b = a;
        a = x;
    }

    int s1 = b * c;
    int d = (a - c) / 2;
    int s2 = d * c;
    int s3 = a * b;
    int s = s3 - 2*s2 - s1;
    cout << s << endl;
    return 0;
}