#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = -1, l = s.length();

    for(int i = 0; i < l; i++)
    {
        if(s[i] == '.')
        {
            x = i;
            break;
        }
    }

    if(x == -1) {
        cout << "int " << s << endl;
        return 0;
    }

    string a = s.substr(0, x);
    string b = s.substr(x + 1);

    bool isFractionalPartZero = true;
    for(char ch : b) {
        if(ch != '0') {
            isFractionalPartZero = false;
            break;
        }
    }

    if(isFractionalPartZero) {
        cout << "int " << a << endl;
    } else {
        cout << "float " << a << " 0." << b << endl;
    }

    return 0;
}
