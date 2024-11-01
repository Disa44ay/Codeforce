#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        if (s[0] == '1' && s[1] == '0' &&
            (s[2] >= '2' || (s[2] == '1' && s[3] >= '0' && s[3] <= '9'))) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    long long t;
//    cin >> t;
//    cin.ignore();
//
//    while (t--)
//    {
//        string s;
//        getline(cin, s);
//
//        if (s.size() < 2 || s.substr(0, 2) != "10")
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            string a = s.substr(2);
//
//            if (a.size() > 1 && a[0] == '0')
//            {
//                cout << "NO" << endl;
//            }
//            else
//            {
//                int b = stoi(a);
//
//                if (b >= 2)
//                {
//                    cout << "YES" << endl;
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                }
//            }
//        }
//    }
//
//    return 0;
//}
