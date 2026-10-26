#include <iostream>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = 1,b = n-1;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                a = n/i;
                b = n-a;
                break;
            }
        }

        cout << a << ' ' << b << '\n';
    }
}