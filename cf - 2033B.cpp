#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--){
        int n,sum=0; cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]<0)
            {
                int l=i,k=j;
                int min=arr[l][k];
                l++; k++;
                while(l<n && k<n)
                {
                    if(min>arr[l][k])
                    {
                        min=arr[l][k];
                        arr[l][k]=0;
                    }
                    if(arr[l][k]<0)
                    {
                        arr[l][k]=0;
                    }
                    l++; k++;
                }
                sum+=min;
            }
        }
    }
    cout<<sum*(-1)<<endl;


   }
}
