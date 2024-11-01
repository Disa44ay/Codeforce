#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for (int k=0; k<t; k++)
    {
        int n;
        cin >>n;
        string s;
        cin >>s;
        int f;
        int l;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='B')
            {
                f=i;
                break;
            }
        }
        for (int i=0; i<n; i++)
        {
            if (s[i]=='B')
            {
                l=i;
            }
        }
        int res=l-f+1;
        cout <<res<<"\n";
    }


}
