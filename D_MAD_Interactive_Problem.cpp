#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        int k = 1;
        string query = " 1";
        string query2 = "";

        vector<int> v(2*n + 1);
        vector<int> missing;

        for(int i = 2; i <= 2*n; i++){
            query = query + " " + to_string(i);
            k++;
            query = "? " + to_string(k) + query;
            cout << query << '\n';
            cout.flush();

            query = query.substr(2);

            query = query.substr(query.find(" "));

            int x;
            cin >> x;
            if(x != 0){
                v[i] = x;
                k--;

                query = query.substr(0, query.find_last_of(" "));
                
                query2 = query2 + " " + to_string(i);
            }else{
                missing.push_back(i);
            }
        }
        missing.push_back(1);
        k = n+1;
        query2 = "? " + to_string(k) + query2;

        for(int i = 0; i < missing.size(); i++){
            query2 = query2 + " " + to_string(missing[i]);
            cout << query2 << '\n';
            cout.flush();
            query2 = query2.substr(0, query2.find_last_of(" "));
            int x;
            cin >> x;
            v[missing[i]] = x;
        }
        string ans = "!";
        for(int i = 1; i <= 2*n; i++){
            ans = ans + " " + to_string(v[i]);
        }
        cout << ans << '\n';
        cout.flush();
    }
}