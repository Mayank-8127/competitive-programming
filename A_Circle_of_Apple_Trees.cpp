#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n,t, count = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> t;
            if(a[t-1] == 0){
                a[t-1] = 1;
                count++;
            } 
        }
        cout << count << '\n';
    }
}