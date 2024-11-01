#include<bits/stdc++.h>
using namespace std;
int main(){
    long int a[4];
    long int count = 0;

    for(long int i = 0; i < 4; i++){
        cin >> a[i];
    }
    for(long int i = 0; i < 4; i++){
        for(long int j = i + 1; j < 4; j++){
            if(a[i] == a[j]){
                count++;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}
