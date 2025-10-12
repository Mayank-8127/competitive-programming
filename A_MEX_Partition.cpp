#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int mex = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == mex) mex++;
        }
        cout << mex << endl;
    }
}