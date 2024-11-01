#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int t = a[f - 1];
        sort(a.begin(), a.end(), greater<int>());

        int ft = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == t) {
                ft = i;
                break;
            }
        }

        if(a[ft + 1] == t && ft + 1 <= k) {
            cout << "MAYBE" << endl;
        } else if ( ft + 1 <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n, f, k;
//        cin >> n >> f >> k;
//        if(n == 1 && n == k)
//        {
//            cout << "YES" << endl;
//            return 0;
//        }
//        vector<int> a(n);
//        for(int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//
//        int t = a[f-1];
//        sort(a.begin(), a.end(), greater<int>());
//
////        for(int i = 0; i <n; i++){
////            cout << a[i] << " ";
////        }
////        cout << endl;
////        cout << t << endl;
//        int ft;
//        for(int i = 0; i < n; i++)
//        {
//            if(a[i] == t)
//            {
//                ft = i;
//                break;
//            }
//            break;
//        }
//        if(ft + 1 <= k)
//        {
//            cout << "YES" << endl;
//                 return 0;
//        }
//        else
//        {
//            if(a[ft + 2] == t)
//            {
//                cout << "MAYBE" << endl;
//                return 0;
//            }
//        }
//
//
//
//
//
//    }
//    return 0;
//}
