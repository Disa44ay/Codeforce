#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
    cin >> n >> m;
 
    unordered_map<string, string> server_map;
 
    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        server_map[ip] = name;
    }
 
    for (int i = 0; i < m; i++) {
        string command, ip;
        cin >> command >> ip;
 
        ip.pop_back();
        cout << command << " " << ip << "; #" << server_map[ip] << "\n";
    }
 
    return 0;
}