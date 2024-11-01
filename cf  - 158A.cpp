#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    int count = 0;

    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(a[k-1]==0)
    {
         for(int i=0; i<k-1; i++)
         {
             if(a[i]!=0)
             {
                 count++;
             }
         }
         cout<<count;

    } else{
    for(int i = k-1; i < n - 1; i++)
    {
        if(a[k-1] == a[i + 1])
        {
            count++;
        }
    }
    cout << k+count;
    return 0;

    }


}
