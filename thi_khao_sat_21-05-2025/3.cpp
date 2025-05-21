#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    string sn = "";
    c1 = s.size();

    for (int i = 0; i < c1; i++) {
        if (s[i] >= 'A' and s[i] <= 'Z') {
            c2++;
        } else if (s[i] >= 'a' and s[i] <= 'z') {
            c3++;
        } else if (s[i] >= '0' and s[i] <= '9') {
            c4++;
        }
    }

    for (int i = (c1 - 1); i >= 0; i--) {
        sn = sn + s[i];
    }

    cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl << sn << endl;
    return 0;
}