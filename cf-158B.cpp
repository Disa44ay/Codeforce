#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, count = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) count1++;
        else if(a[i] == 2) count2++;
        else if(a[i] == 3) count3++;
        else if(a[i] == 4) count4++;
    }

    count += count4;

    count += count3;
    if(count1 >= count3) {
        count1 -= count3;
    } else {
        count1 = 0;
    }

    count += count2 / 2;
    if(count2 % 2 == 1) {
        if(count1 >= 2) {
            count++;
            count1 -= 2;
        } else if(count1 == 1) {
            count++;
            count1--;
        } else {
            count++;
        }
    }

    count += count1 / 4;
    if(count1 % 4 != 0) {
        count++;
    }

    cout << count << endl;

    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;

//int main()
//{
//    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int n, count = 0, sum2 = 0, count1 = 0, count3 = 0, a1 = 0, last = 0;
//    cin >> n;
//
//    vector<int> a;
//    for(int i = 0; i < n; i++){
//        int element;
//        cin >> element;
//        a.push_back(element);
//    }
//
//    for(int i = 0; i < a.size(); ){
//        if(a[i] == 4){
//            count++;
//            a.erase(a.begin() + i);
//        }
//        else if(a[i] == 2){
//            sum2 += a[i];
//            a.erase(a.begin() + i);
//        }
//        else if(a[i] == 1){
//            count1++;
//            i++;
//        }
//        else if(a[i] == 3){
//            count3++;
//            count++;
//            last += 1;
//            a.erase(a.begin() + i);
//        }
//        else {
//            i++;
//        }
//    }
//
//    if(sum2 % 2 == 0){
//        count = count + sum2 / 2;
//    } else {
//        count = count + sum2 / 2 + 1;
//    }
//
//
//    count += count1 / 4;
//
//
//    if(count1 % 4 != 0){
//        a1 = count1 % 4;
//    }
//
//    if(a1 <= last){
//        cout << count;
//    } else {
//        cout << count + 1;
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int n, sum = 0;
//    cin >> n;
//
//    int a[n];
//    for(int i =0 ; i < n; i++){
//        cin >> a[i];
//        sum += a[i];
//    }
//   if(sum % 4 == 0){
//    cout << sum / 4;
//   }
//   else {
//    cout << sum/4 + 1;
//   }
//   return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    int n, count = 0;
//    cin >> n;
//    vector<int> a(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        if (a[i] == 4) {
//            cout << i << " ";
//            a.erase(a.begin() + i);
//            count++;
//        }
//    }
//    cout <<endl;
//
//    sort(a.begin(), a.end());
//
//     for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//     }
//     cout << endl;
//
//    for (int i = count ; i < n - 1; i++) {
//            for (int j = n - 1; j >= count; j--) {
//                int sum = a[i] + a[j];
//                if (sum == 4) {
//                    a.erase(a.begin() + i);
//                    a.erase(a.begin() + j);
//                    count++;
//                    cout << "count1: " << count << endl;
//                } else if (sum < 4) {
//                    a.erase(a.begin() + i);
//                    a.erase(a.begin() + j);
//                    count ++;
//                    cout << "count2: " << count << endl;
//                }
//            }
//        }if (a.size() == 1) {
//        count++;
//    }
//
//    cout << count << endl;
//
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int n, count = 0;
//    cin >> n;
//
//    vector<int>a(n);
//
//    for(int i = 0; i< n; i++){
//        cin >> a[i];
//        if(a[i] == 4){
//            a[i] = 0;
//            count++;
//        }
//    }
//
//    cout << "count1: " << count << endl;
//
//    sort(a.begin(), a.end());
//
//    for(int i = count; i < n; i++){
//        for(int j = n - 1; j >= count ; j--){
//            if(a[i] + a[j] == 4){
//            a[i] = 0;
//            a[j] = 0;
//                count++;
//                 cout << "count2: " << count << endl;
//            }else if(a[i] + a[j] == 3){
//                a[i] = 0;
//                a[j] = 0;
//                count++;
//                 cout << "count2: " << count << endl;
//            }else if(a[i] + a[j] > 4){
//                a[i] = 0;
//                a[j] = 0;
//                count +=2;
//                 cout << "count3: " << count << endl;
//            }
////            else{
////            cout << n << "\n";
////            }
//        }
//    }
//    for(int i = 0; i< n; i++){
//         if(a[i] != 0){
//            count++;
//         }
//    }
//     cout << "count4: " << count << endl;
//    cout <<  count << "\n";
//    cout << "countT: " << count << endl;
//    return 0;
//}
//
