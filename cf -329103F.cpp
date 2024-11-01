#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int c = n / 2;
    for(long long int i = 0; i < c; i++)
    {
        cout << a[i] << " " << a[n - i - 1] << " ";
    }
    if(n % 2 != 0)
    {
        cout << a[c];
    }

    return 0;
}
