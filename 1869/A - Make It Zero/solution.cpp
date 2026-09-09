#include <cstdio>
 
int main(){
 
    long t; scanf("%ld", &t);
 
    while(t--){
        long n; scanf("%ld", &n);
 
        for(long p = 0; p < n; p++){
            long x;
            scanf("%ld", &x);
        }
 
        if(n % 2){
            printf("4
2 %ld
2 %ld
1 2
1 2
", n, n);
        }
        else{
            printf("2
1 %ld
1 %ld
", n, n);
        }
    }
}