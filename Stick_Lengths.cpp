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
    int mid = a[(n-1)/2];
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += abs(mid-a[i]);
    }
    cout << sum;
}