#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, count = 0;
    cin >> a >> b;

//    if (a > b) {
//        while (a > b + 10) {
//            a = a - 10;
//            count++;
//        }
//        cout << count + 1 << "\n";
//    } else if (a < b) { // 13 42
//        int d = b - 9; //33
//        while (a < d) {
//            a = a + 10;
//            count++;
//        }
//        cout << count + 1 << "\n";
//    } else {
//        cout << "0" << "\n";
//    }
    if(a > b)
    {
        int e = a - b;
        int d = e % 10;
        int c = e / 10;
        if(d == 0)
        {
            cout << c  << endl;
        }
        else
        {
            cout << c + 1 << endl;
        }
    }
    if(a < b)
    {
        int e = b - a;
        int d = e % 10;
        int c = e / 10;
        if(d == 0)
        {
            cout << c << endl;
        }
        else
        {
            cout << c + 1 << endl;
        }
    }
    if(a == b)
    {
        cout << "0" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
