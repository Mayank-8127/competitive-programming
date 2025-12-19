#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),d(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> d[i];
    }
    sort(a.begin(), a.end());
    sort(d.begin(), d.end());
    int c = 0, mx = 0, i = 0, j = 0;
    while(i < n){
        while(d[j] < a[i]){
            j++;
            c--;
        }
        i++;
        c++;
        mx = max(mx, c);
    }
    cout << mx;
}