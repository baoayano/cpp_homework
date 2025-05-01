#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int abc = sqrt(s1 * s2 * s3);
    int a = abc/s1;
    int b = abc/s2;
    int c = abc/s3;
    int sum = 4*(a + b + c);
    cout << sum << endl;
    return 0;
}