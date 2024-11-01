#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    vector<int> b;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    int temp = 0;
    int res = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        /*0 1 2 3 4 5
          1 1 2 2 4 5
        */
        if(i == 0)
        {
            temp = a[i]; // temp = 1
            res = 1;
        }
        else
        {
            if (temp == a[i]) // 1 == 1
            {
                res++; //res 2
            }
            else if(temp + 1 == a[i])
            {
                count += res;
                temp = a[i];
                res = 1;
            }
            else
            {
                res = 1;
                temp = a[i];
            }
        }
    }
cout << count << endl;

return 0;
}
