#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++) cin >> a[i];
        vector<long long> b(n);
        long long c = 1;
        b[0] = 1;
        cout << b[0] << " ";
        for(long long i = 1; i < n; i++){
            long long temp = a[i] - a[i-1];
            if(temp >= i+1){
                c++;
                b[i] = c;
            }else{
                b[i] = b[i-temp];
            }
            cout << b[i] << " ";
        }
        cout << endl;
    }
}