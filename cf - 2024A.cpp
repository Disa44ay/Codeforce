#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b;
        cin >> a >> b;
        if(a >= b)
        {
            cout << a << endl;
        }
        else
        {
            long long c = b - a;
            a = a - c;
            b = b - (2 * c);
            if(a == b && a > 0){
                cout << a << endl;
            }else{
                cout << 0 << endl;
            }
        }

    }

    return 0;
}
