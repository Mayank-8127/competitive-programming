#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> people(n);
    for(int i = 0; i < n; ++i){
        cin >> people[i].second;
    }
    for(int i = 0; i < n; ++i){
        cin >> people[i].first;
    }
    sort(people.begin(), people.end());
    long long ans = k;
    int i = 0, j = 1;
    while(j < n && people[i].first < k){
        if(people[i].second > 0){
            people[i].second--;
            ans += people[i].first;
            j++;
        }else{
            i++;
        }
    }
    if(j < n){
        ans = ans + (n-j)*(long long)k;
    }

    // while(j < n){
    //     if(i = 0){
    //         i++;
    //         j++;
    //         ans += k;
    //     }
    //     else if(people[i].first < k){
    //         if(n-j >= people[i].second){
    //             ans = ans + (people[i].second*people[i].first);
    //         }
    //     }
    // }
    cout << ans << '\n';
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}