#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long mx = INT_MIN;
    vector<long long> a, s;
    s.push_back(0);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
        a.push_back(x);
        s.push_back(sum);
    }
    int h = 0;
    for(int i = 1; i <= n; i++){
        sum = s[i] - s[h];
        if(sum < 0){
            h = i;
        }
        mx = max(sum, mx);
    }
    cout << mx;
}