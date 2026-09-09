#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, p, v, t, count = 0;
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &p, &v, &t);
 
        if((p == 1 && v == 1) || (v == 1 && t == 1) || (p == 1 && t == 1)||
           (p == 1 && v == 1 && t == 1)){
            count++;
        }
    }
        printf("%d", count);
 
 
return 0;
}