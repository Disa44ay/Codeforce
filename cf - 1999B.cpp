#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin >> t;
    while(t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        int  count = 0;
        if((a > c && b >= d) || (a >= c && b > d))
        {
            count+= 2;
        }
        if((a >  d && b >= c) || (a >=  d && b > c))
        {
            count+= 2;
        }

        if(count > 0)
        {
            cout << count << endl;
        }
        else
        {
            cout << "0" <<  endl;
        }


    }
    return 0;
}
