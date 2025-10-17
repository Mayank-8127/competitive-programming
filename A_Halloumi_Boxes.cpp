#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n,t, sorted = 1;
        cin >> n >> t;
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            a = b;
            cin >> b;
            if(a > b) sorted = 0;
        }
        if(t > 1 || sorted == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}