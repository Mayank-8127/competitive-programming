#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long sum = 0;
    int f = 1;
    for(int i = 0; i < n; i++){
        if(sum < a[i] - 1){
            cout << sum + 1;
            f = 0;
            break;
        }
        sum += a[i];
    }
    if(f){
        cout << sum + 1;
    }
}