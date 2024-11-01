#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];

    for(int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    sort(a, a+n);

    int count = 0;
    for(int  i = 0; i <n; i++)
    {
        if(a[i] == a[0])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }
    cout << endl;
    return 0;
}
