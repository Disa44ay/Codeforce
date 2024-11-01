#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int b[n];

    for(long long int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        b[i] = x;
    }
    int temp = 0;
    int count = 0;
    int temp2 = 0;
    int count2 = 1;
    b[0] = -b[0];

    if(n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(i ==  0)
            {
                temp = a[i];
                temp = b[i];
            }
            if((temp > 0 && a[i] > 0) || (temp < 0 && a[i] < 0))
            {
                count++;
                a[i] = -a[i];
            }
            if((temp2 > 0 && b[i] > 0) || (temp2 < 0 && b[i] < 0))
            {
                count2++;
                b[i] = -b[i];
            }
            temp = a[i];
            temp2 = b[i];
        }
    }
    if(count < count2)
    {
        cout << count << endl;
    }
    else
    {
        cout << count2 << endl;
    }

    return 0;
}
