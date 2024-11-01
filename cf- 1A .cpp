#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long x, y;

    if(m % a == 0)
    {
        x = m / a;
    }
    else if(m%a != 0)
    {
        x = m / a + 1;
    }
    if(n % a == 0)
    {
        y = n / a;
    }
    else if(n % a != 0)
    {
        y = n / a + 1;
    }
    long long z = x * y;
    cout << z;

}
