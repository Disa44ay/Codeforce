#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        int n = s.length();
        int add_to = -1;
        char change_to = '\0';

        for (int i = 0; i < n; i++) {
            if (i + 1 < n && s[i + 1] == s[i]) {
                add_to = i;
                break;
            }
        }

        if (add_to == -1) {
            set<char> chars_in_s(s.begin(), s.end());
            for (char c = 'a'; c <= 'z'; c++) {
                if (chars_in_s.find(c) == chars_in_s.end()) {
                    change_to = c;
                    break;
                }
            }
            string result = change_to + s;
            cout << result << endl;
        } else {
            for (char c = 'a'; c <= 'z'; c++) {
                if (c != s[add_to]) {
                    change_to = c;
                    break;
                }
            }
            string start = s.substr(0, add_to + 1);
            string last = s.substr(add_to + 1);
            string result = start + change_to + last;
            cout << result << endl;
        }
    }

    return 0;
}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//    cin.ignore();
//
//    while (t--) {
//        string s;
//        getline(cin, s);
//
//        int n = s.length();
//        int add_to = -1;
//        char change_to;
//        unordered_set<char> chars_in_s(s.begin(), s.end());
//
//        for (int i = 0; i < n; i++) {
//            for (char c = 'a'; c <= 'z'; c++) {
//                if (c != s[i]) {
//                    change_to = c;
//                    break;
//                }
//            }
//            if (i + 1 < n && s[i + 1] == s[i]) {
//                add_to = i;
//                break;
//            }
//        }
//
//        if (add_to == -1) {
//            for (char c = 'a'; c <= 'z'; c++) {
//                if (chars_in_s.find(c) == chars_in_s.end()) {
//                    change_to = c;
//                    break;
//                }
//            }
//            string result = change_to + s;
//            cout << result << endl;
//        } else {
//            string start, last, result;
//            for (int i = 0; i < add_to; i++) {
//                start += s[i];
//            }
//            for (int i = add_to; i < n; i++) {
//                last += s[i];
//            }
//            result = start + change_to + last;
//            cout << result << endl;
//        }
//    }
//
//    return 0;
//}
//
////#include <bits/stdc++.h>
////using namespace std;
////
////int main()
////{
////    int t;
////    cin >> t;
////    cin.ignore();
////
////    while (t--)
////    {
////        string s, start, last, result;;
////
////        getline(cin, s);
////
////        int n = s.length();
////        int add_to = -1;
////        char change_to;
////
////        for (int i = 0; i < n; i++)
////        {
////            for (char c = 'a'; c <= 'z'; c++)
////            {
////                if (c != s[i])
////                {
////                    change_to = c;
////                    break;
////                }
////            }
////            if (i + 1 < n && s[i + 1] == s[i])
////            {
////                add_to = i;
////                break;
////            }
////        }
////
////        if (add_to == -1)
////        {
////            result = change_to + s;
////            cout <<  result << endl;
////
////        }
////        else
////        {
////            for (int i = 0; i < add_to; i++)
////            {
////                start += s[i];
////            }
////            for (int i = add_to; i < n; i++)
////            {
////                last += s[i];
////            }
////            result = start + change_to + last;
////
////            cout << result << endl;
////        }
////    }
////
////
////
////    return 0;
////}
