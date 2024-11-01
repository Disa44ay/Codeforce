#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l,r,L,R;
        cin>>l>>r>>L>>R;

        int door= min(r,R)-max(l,L);

        if(door<0)
        {
            cout<<"1\n";
        }
        else
        {
            if((l==L && r!=R) || (l!=L && r==R))
            {
                door++;
            }
            else if(l!=L && r!=R)
            {
                door+=2;
            }
            cout<<door<<"\n";
        }

    }

    return 0;
}
