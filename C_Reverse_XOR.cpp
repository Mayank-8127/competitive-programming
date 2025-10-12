#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string bin_n = "";
        while(n > 0){
            bin_n = to_string(n % 2) + bin_n;
            n /= 2;
        }
        int count = 0;
        for(int i = bin_n.size()-1; i >= 0; i--){
            if(bin_n[i] == '0') count++;
            else break;
        }
        for(int i = 0; i < count; i++) bin_n = '0' + bin_n;
        // cout << bin_n << endl;

        bool is_palindrome = true;
        for(int i = 0; i < bin_n.size()/2; i++){
            if(bin_n[i] != bin_n[bin_n.size()-1-i]){
                is_palindrome = false;
                break;
            }
        }
        if(is_palindrome == false){
            cout << "NO" << endl;
            continue;
        }

        if(bin_n.size() %2 == 0){
            cout << "YES" << endl;
            continue;
        }else{
            int mid = bin_n.size()/2;
            if(bin_n[mid] == '0'){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}