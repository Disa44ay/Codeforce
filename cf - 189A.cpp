#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,ans,k;
    cin >> n >> a >> b >>c;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            k=n-i*a-j*b;
            if(k>=0 && k%c==0 && ans<i+j+k/c)
                ans=i+j+k/c;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
