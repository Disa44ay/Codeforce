#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w, n;
    scanf("%d", &w);
    n = w % 2;
    if (w == 2){
        printf("NO");
    }
    else if (n % 2 == 0){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}