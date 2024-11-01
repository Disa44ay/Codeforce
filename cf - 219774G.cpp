#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    long long int a[n];
    for(long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n/2; i++)
    {
        if(a[i] != a[n-1-i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    long long int n;
//    cin >> n;
//
//    long long int a[n];
//    for(long int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    long long int c[n];
//    long long int count = 0;
//
//    for(int i = 0; i < n; i++) {
//        c[i] = a[i];
//    }
//
//    for(int i = 0; i < n; i++)
//    {
//        if(c[i] == a[n - 1 - i])
//        {
//            count++;
//        }
//        else
//        {
//            cout << "NO";
//            return 0;
//        }
//    }
//
//    if(count == n)
//    {
//        cout << "YES";
//    }
//
//    cout << endl;
//    return 0;
//}
