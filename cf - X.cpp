#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (max (a,c) > min (b, d)) {
        cout << -1 << endl;
    }
    else {
        cout << max (a, c)<< " " << min(b, d) << endl;
    }

    return 0;
}
