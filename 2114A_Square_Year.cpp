#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
 
        if(a == 1){
            cout << 0 << " " << 1 << endl;
        } else {
            int d = sqrt(a);
            float b = sqrt(a);
 
            if(b - d == 0)
            {
                if(d % 2 == 0)
                {
                    int half = d / 2;
                    cout << half << " " << half << endl;
                }
                else
                {
                    int half1 = d / 2;
                    int half2 = half1 + 1;
                    cout << half1 << " " << half2 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}