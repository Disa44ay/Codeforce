#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n], count = 1, counte = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] == a[i]) {
                count++;
            } else {
                break;
            }
        }

        int firstValue = a[0];
        int st = -1, ed = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] != firstValue) {
                st = i;
                break;
            }
        }

        for (int i = n - 1; i > 0; i--) {
            if (a[i] == a[i - 1]) {
                counte++;
            } else {
                break;
            }
        }

        if (count == n) {
            cout << "0" << endl;
        } else if (a[0] == a[n - 1]) {
            for (int i = n - 2; i >= 0; i--) {
                if (a[i] != firstValue) {
                    ed = i + 1;
                    break;
                }
            }
            cout << ed - st << endl;
        } else {
            if (counte > count) {
                cout << n - counte << endl;
            } else {
                cout << n - st << endl;
            }
        }
    }
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int t, n, i, j, d = 0, e = 0, f = 0, g = 0;
//    cin >> t;
//
//    for (i = 0; i < t; i++) {
//        cin >> n;
//        vector<int> a(n);
//
//        for (j = 0; j < n; j++) {
//            cin >> a[j];
//        }
//
//        int count = 0;
//        for (j = 0; j < n; j++) {
//            if (a[0] == a[j]) {
//                count++;
//            }
//        }
//
//        if (count == n) {
//            cout << "0" << endl;
//        } else if (a[0] == a[n - 1]) {
//            for (j = 0; j <= n; j++) {
//                if (a[0] != a[j]) {
//                    d = j;
//                    break;
//                }
//            }
//
//            for (j = n - 1; j >= 0; j--) {
//                if (a[n - 1] != a[j]) {
//                    e = j + 1;
//                    break;
//                }
//            }
//
//            cout << e - d << endl;
//        } else if (a[0] != a[n - 1] && a[n - 1] == a[n - 2]) {
//            for (j = n - 1; j >= 0; j--) {
//                if (a[n - 1] != a[j]) {
//                    g = j + 1;
//                    break;
//                }
//            }
//            cout << g << endl;
//        } else {
//            for (j = 0; j < n; j++) {
//                if (a[0] != a[j]) {
//                    f = j;
//                    break;
//                }
//            }
//            cout << n - f << endl;
//        }
//    }
//    return 0;
////}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n, i, b, j, count = 0;
//        cin >> n;
//        int a[n];
//        for (i = 0; i < n; i++)
//        {
//            cin >> a[i];
//            if (i > 0 && a[i] == a[i - 1])
//            {
//                count++;
//            }
//        }
//        cout << count << "\n";
//
//        if (count == n)
//        {
//            cout << "0" << "\n";
//        }
//        else if (a[0] != a[n - 1])
//        {
//            for (i = 0; i < n - 1; i++)
//            {
//                if (a[i] != a[i + 1])
//                {
//                    int c = i;
//                    cout << n - c + 1 << "\n";
//                    break;
//                }
//            }
//        }
//        else
//        {
//            b = count;
//            for (i = n - 1; i >= b; i--)
//            {
//                if (a[n - 1] != a[n - 2])
//                {
//                    j = i;
//                }
//                cout << j - count + 1 << "\n";
//                break;
//            }
//        }
//    }
//    return 0;
//}

