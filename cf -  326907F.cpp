#include<bits/stdc++.h>
using namespace std;

long long solve(long long count)
{
    long long n,i;
    cin>>n;
    for(i=0; n%2==0; i++)
    {
        n/=2;
    }
    count =max(count,i);
    return count;
}

int main()
{
    int t;
    cin>>t;
    long long count=0;
    while(t--)
    {
        count=solve(count);

    }
    cout<<count<<"\n";
}
