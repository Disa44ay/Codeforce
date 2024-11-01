#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long int a;
        cin >> a;
        if(a == 1)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
            for(int i = 1; i< a; i++)
            {
                cout << "0";
            }
        }

        cout << endl;
    }
    return 0;
}
