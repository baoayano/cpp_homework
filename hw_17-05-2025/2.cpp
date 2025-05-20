#include <iostream>
#include <math.h>
using namespace std;

int ktra(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            bool c = true;
            if ((i + j) >= s.size()) continue;
            string str = s.substr(i, j + 1);
            for (int x = 0; x < floor(str.size() / 2); x++) {
                if (str[x] != str[str.size() - 1 - x]) {
                    c = false;
                    break;
                }
            }

            if (c == true) {
                dem = dem + 1;
            }
        }
    }

    return dem;
}

int main()
{
    string s;
    cin >> s;
    cout << ktra(s);
    
    return 0;
}