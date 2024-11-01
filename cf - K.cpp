#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < 3;i++){
        if(a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    cout << min << " " << max << endl;
    return 0;
}
