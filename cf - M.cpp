#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int a = s[0];
    if(a > 47 && a < 65)
    {
        cout << "LAPHA\nIS DIGIT" << endl;
    }
    else if(a >= 65 && a < 97)
    {
        cout << "IS CAPITAL" << endl;
    }
    else if(a >= 97)
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    return 0;

}
