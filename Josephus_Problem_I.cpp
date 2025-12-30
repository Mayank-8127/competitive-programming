#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);

    while(v.size() > 1){
        for(int i = 1; i < v.size(); i+=2){
            cout << v[i] << ' ';
        }
        vector<int> newv;
        if(v.size() %2 != 0){
            newv.push_back(v[v.size()-1]);
        }
        for(int i = 0; i < v.size()-1; i+=2){
            newv.push_back(v[i]);
        }
        v = newv;
    }
    cout << v[0];
}