#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                v.push_back(i+1);
            }
        }
        cout << v.size() << '\n';
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
}