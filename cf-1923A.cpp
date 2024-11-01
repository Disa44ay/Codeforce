//#include<bits/stdc++.h>
//using namespace std;
//
//void solve() {
//    int n, i, x, b, c, sum = 0, count = 0, d = 0;
//    cin >> n;
//    int a[n];
//    for(i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    for(i = 0; i < n - 1; i++) {
//        if(a[i] == 1) {
//            count++;
//        }
//        if(a[i] == 1 && a[i+1] == 0) {
//            b = i;
//            break;
//        }
//    }
//    cout <<b << endl;
//
//    if(count == 1) {
//        cout << "0" << endl;
//    } else if(count == n){
//        cout << "0" << endl;
//        }else if(count > 1) {
//        for(i = n - 1; i >= b - 1; i--) {
//            if(a[i] == 1) {
//                c = i;
//                if(a[i] == 0) {
//                    swap(a[i], a[c]);
//                    d++;
//                    if(a[i] == 1 && a[i-1] == 1) {
//                        cout << d << endl;
//                        break;
//                    }
//                }
//            }
//        }
//  }
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while(t--) {
//        solve();
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int minOperations(vector<int>& a) {
//    int n = a.size();
//    int count = 0;
//
//    for (int i = n - 1; i >= 0; --i) {
//        if (a[i] == 1) {
//            int j = i;
//            while (j > 0 && a[j - 1] == 0) {
//                swap(a[j], a[j - 1]);
//                --j;
//                ++count;
//            }
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//
//        vector<int> a(n);
//        for (int i = 0; i < n; ++i) {
//            cin >> a[i];
//        }
//
//        int r = minOperations(a);
//        cout << r << endl;
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//cin.tie(0);
//cout.tie(0);
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n, b, d, e, c = 0, count = 0;
//        cin >> n;
//
//        int a[n];
//        for (int i = 0; i < n; ++i) {
//            cin >> a[i];
//            c += a[i];
//        }
//
//        for (int i = 0; i < n; i++) {
//            if (a[i] == 1 && a[i + 1] == 0) {
//                b = i;
//                break;
//            }
//        }
//
//        if (c == 1 || c == n) {
//            cout << "0" << "\n";
//        } else {
//            while (a[b + 1] != 1) { // 0 1 1 0 0 0 1 1 0
//                for (int i = n - 1; i >= b; i--) { //
//                    if (a[i] == 1) {
//                        d = i;
//                        for (int j = d; j >= b; j--) {
//                            if (a[j] == 0) {
//                                e = j;
//                                swap(a[d], a[e]);
//                                count++;
//                                break;
//                            }
//                        }
//                    }
//                }
//            }
//
//            cout << count << "\n";
//        }
//    }
//
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, f = -1, l = -1, count = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i< n; i++){
             if(a[i] == 1)
            {
                if(f == -1)
                {
                    f = i;
                }
                l = i;
            }
        }
        for(int i = f; i < l; i++) //0 1 0 0 1 0 1 1 1
        {
            if(a[i] == 0)
            {
                count++;
            }
        }
         cout << count << "\n";
  //  cout << f << " " << l << " " << endl;

    }
    return 0;
}

