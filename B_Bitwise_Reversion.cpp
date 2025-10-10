#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int a = x | z, b = x | y, c = y | z;
        if((a & b) == x && (b & c) == y && (c & a) == z){
            cout << "Yes\n";
        }else{
            cout << "No\n";
            // cout << a << ' ' << b << ' ' << c << '\n';
        }
    }
}