#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        int count1 = 0, count0 = 0;
 
 
        cin >> a;
        for (int i=0; i<n; i++)
        {
            if (a[i]=='1' && a[i-1]=='0') count0++;
            if(a[i]=='1')
                count1++;
        }
         if(a[n-1]=='0')
    {
        count0++;
    }
 
        //cout<<count0<<" "<<count1<<endl;
 
            if(count0 >= count1)
        cout<<"NO
";
    else
        cout<<"YES
";
   }
    return 0;
}