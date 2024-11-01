#include<bits/stdc++.h>
using namespace std;
int a[100001],n,r,t;
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    for(cin>>t; t; t--)
    {
        cin>>n;
        r=0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=(n-1)/2; i>=1; i--)
        {
            if(a[i]==a[i+1]||a[n-i]==a[n+1-i])
            {
                swap(a[i],a[n+1-i]);
            }
        }
        for(int i=1; i<=n-1; i++)
        {
            if(a[i]==a[i+1]) r++;
        }
        cout<<r<<'\n';
    }
    return 0;
}
