#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,s;cin>>n>>s;

    if(n>=s)
    {
        cout<<s-1<<" 1\n";
    }else
    {
        long long check=(n*(n+1))/2;
        if(check>=s)
        {
            for(long long i=n; s!=0; i--)
            {
                if(s>i)
                {
                    cout<<i<<" ";
                    s-=i;
                }else
                {
                    cout<<s<<"\n";
                    s-=s;
                }
            }
        }else
        {
            cout<<-1<<"\n";
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
}
