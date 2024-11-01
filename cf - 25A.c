#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    int counte = 0, counto = 0;
    for(int i = 0; i <n; i++)
    {
        cin >> a[i];

        if(a[i] % 2 == 0)
        {
            counte++;
        }
        else
        {
            counto++;
        }
    }

    if(counte > counto)
    {
        for(int i =0; i <n; i++)
        {
            if(a[i] % 2 != 0)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    else
    {
        for(int i =0; i < n; i++)
        {
            if(a[i] % 2 == 0)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;

}
