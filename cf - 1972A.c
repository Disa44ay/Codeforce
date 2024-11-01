#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, c = 0;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++)  //4 5 6 7 8 9
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) //1 2 3 4 5
        {
            cin >> b[i];
        }
        for(int i = 0 ; i < n; i++)
        {
            if (a[i] > b[i]) // 4 > 1
            {
                k = i; // i = 0
                for(int j = n-1; j > k; j--)  //9 8 7 6 5
                {
                    a[j] = a[j-1];// 8 7 6 5
                }
                a[k] = b[i]//a[0] = 1;
                       c++;
            }

        }


    }
}
}
