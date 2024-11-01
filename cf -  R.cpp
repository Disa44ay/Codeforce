#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    int y = a / 365;
    int b = a % 365;
    int m = b / 30;
    int d = b % 30;

    cout << y << " " << "years\n" << m << " " << "months\n" << d << " days\n" << endl;
    return 0;


}
