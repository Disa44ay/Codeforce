#include<bits/stdc++.h>
using namespace std;

void reverseArray(long int arr[], int idx) {
    int start = 0, end = idx - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    long int n;
    cin >> n;

    long int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            reverseArray(a, i);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
