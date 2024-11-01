#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int a = s[0] - '0', b = s[1] - '0';
//    cout << a << b;
    if(b == 0)
    {
        cout << "YES";
    }
    else if(b != 0 && (a % b == 0 || b % a == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;



    return 0;
}
