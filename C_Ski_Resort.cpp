#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, q, temp, c = 0, ans = 0;
        cin >> n >> k >> q;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(temp <= q){
                c++;
                if(c >= k) ans += (c-k+1);
            }else{
                c = 0;
            }
        }
        cout << ans << '\n';
        
    }
}