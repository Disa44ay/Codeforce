#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0,cpy;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                count=i;
                cpy=count;
                break;
            }
        }
        for(int i=cpy; i<n-1; i++)
        {
            if(arr[i+1]>arr[cpy])
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
