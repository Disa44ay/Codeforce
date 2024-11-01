#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long count = 0, d;
    if(n <= 5)
    {
        cout << "1" << endl;
    }
    else
    {
        if(n % 5 != 0)
        {
            d = n / 5 + 1;
            cout << d << endl;

        }
        else
        {
            d = n / 5;
            cout << d << endl;
        }
    }
    return 0;
}
