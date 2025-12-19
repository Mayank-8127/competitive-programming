#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0, j = n-1, c = 0;
    while(j >= i){
        if(a[i] + a[j] <= x){
            i++;
        }
        j--;
        c++;
    }
    cout << c;
}