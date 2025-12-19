#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, c = 0;
    while(i < n && j < m){
        if(a[i] - b[j] > k){
            j++;
        }else if(abs(a[i] - b[j]) <= k){
            i++;
            j++;
            c++;
        }else{
            i++;
        }
    }
    cout << c;
}