#include <iostream>
#include <math.h>
using namespace std;

bool ktra(string s)
{
    for (int i = 0; i < floor(s.size() / 2); i++)
    {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main()
{
    string s;
    cin >> s;
    if (ktra(s)) {
        cout << s << " là xâu đối xứng";
    } else {
        cout << s << " không phải xâu đối xứng";
    }

    return 0;
}