#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n, i, maxInd, minInd, min = 10000000000000, max = 0;
        cin >> n;
        int a[n];
       for(i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= min)
        {
            min = a[i];
            minInd = i;
        }
        if(a[i] > max)
        {
            max = a[i];
            maxInd = i;
        }
    }
//    cout << maxInd << endl;
//    cout << minInd << endl;

    if(maxInd > minInd){
        cout << (maxInd - 0) + ((n-1) - minInd) - 1;
    }
    else{
        cout << (maxInd - 0) + ((n-1) - minInd);
    }
    return 0;

    }

//    for(i = 0; i < n; i++){
//        if(a[i] == max){
//            int b = i;
//            c = i - 0;
//            // cout << c << endl;
//        }
//        if(a[i] == min && a[i] !=  a[i+1]){
//            int d = i;
//            e = n - 1 - i;
//            cout << e << endl;
//        }
//    }
//    cout << c + e << endl;
//
//    }
