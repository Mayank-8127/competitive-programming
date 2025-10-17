#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n,m;;
        cin >> n >> m;
        int x = 1;
        while(n >= x){
            x = x << 1;
        }
        x--;
        int x1 = n^x;
        int x2 = m^x;
        if(m > x){
            cout << -1 << '\n';
        }else{
            cout << 2 << '\n';
            cout << x1 << ' ' << x2 << '\n';
        }

    }
}