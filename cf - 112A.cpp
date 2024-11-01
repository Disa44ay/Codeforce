#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    int x = 0, y = 0;
    getline(cin, a);
    getline(cin, b);

     for(int i = 0; i < a.size(); i++){
     char n = tolower(a[i]);
     char m = tolower(b[i]);
     if(n == m){
          x += n;
        y += m;
     }else if(n != m){
         x += n;
        y += m;
        break;
     }
    }
//    cout << x << " " << y << endl;
   if(x < y){
    cout << "-1";
   }else if(x > y){
    cout << "1";
   }else if(x == y){
    cout << "0";
   }

   return 0;

}

