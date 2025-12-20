#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), p(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        p[a[i] - 1] = i;
    }
    int c = 1;
    for(int i = 1; i < n; i++){
        if(p[i] < p[i-1]){
            c++;
        }
    }
    cout << c;
}