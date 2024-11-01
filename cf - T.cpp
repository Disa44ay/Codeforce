#include<bits/stdc++.h>
using namespace std;
int main() {
    long int a[3], c[3];

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
        c[i] = a[i];
    }

    for(int j = 0; j < 3; j++) {
        long int min = INT_MAX;
        int min_index = -1;

        for(int i = 0; i < 3; i++) {
            if(a[i] < min) {
                min = a[i];
                min_index = i;
            }
        }
        cout << min << endl;
        a[min_index] = INT_MAX;
    }
    cout << endl;

    for(int i = 0; i <3;i++){
        cout << c[i] <<endl;
    }

    return 0;
}
