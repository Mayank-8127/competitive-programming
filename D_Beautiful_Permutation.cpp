#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s = 1, e = n, p , a, last_direction, m = n, diff, current_diff;
        
        cout << "1 " << s << ' ' << e << '\n';
        cout.flush();
        cin >> p;
        cout << "2 " << s << ' ' << e << '\n';
        cout.flush();
        cin >> a;
        diff = a-p-1;
        if(diff == n-1){
            cout << "! " << 1 << ' ' << n << '\n';
            continue;
        }

        while(s < ((s+e) >> 1)){
            m = (s+e) >> 1;
            cout << "1 " << s << ' ' << m << '\n';
            cout.flush();
            cin >> p;
            cout << "2 " << s << ' ' << m << '\n';
            cout.flush();
            cin >> a;
            current_diff = a - p;
            if(current_diff <= m-s && current_diff > 0 ){
                e = m;
            }else{
                s = m;
            }
        }
        m = (s+e) >> 1;
        cout << "1 " << s << ' ' << s << '\n';
        cout.flush();
        cin >> p;
        cout << "2 " << s << ' ' << s << '\n';
        cout.flush();
        cin >> a;
        current_diff = a - p;
        if(current_diff == 1){
            cout << "! " << s-diff << ' ' << s << "\n";
            cout.flush();
        }else{
            cout << "! " << s+1 << ' ' << diff+s+1 << "\n";
            cout.flush();
        }

    }
}