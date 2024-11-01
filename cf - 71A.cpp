#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>a;
    int n;
    scanf("%d", &n);
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        string temp;
        getline(cin, temp);
        a.push_back(temp);
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        int l = a[i].length();
        if(l > 10)
        {

            string s = a[i].substr(1,l-2);
            int l2 = s.length();
            cout << a[i][0] << l2 << a[i][l - 1];
            cout << endl;
        }
        else
        {
            cout << a[i];
            cout << endl;
        }
    }

}
