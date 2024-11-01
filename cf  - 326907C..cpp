#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long int> s;

    for(long int i = 0; i < n; i += k)
    {
        int min_val = INT_MAX;

        for(int j = i; j < i + k && j < n; j++)
        {
            if(a[j] < min_val)
            {
                min_val = a[j];
            }
        }
        s.push_back(min_val);
    }

    for(long int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}
