#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = abs(a - b);
    if(c == 1 || c == 0 )
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

