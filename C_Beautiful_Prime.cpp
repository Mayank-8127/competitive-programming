#include <bits/stdc++.h>
using namespace std;

long long power(long long b, long long e) {
    long long res = 1;
    long long M = 998244353;
    b %= M;
    while (e > 0) {
        if (e % 2 == 1) res = (res * b) % M;
        b = (b * b) % M;
        e /= 2;
    }
    return res;
}

long long modInv(long long n) {
    long long M = 998244353;
    return power(n, M - 2);
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long d, n;
        cin >> d >> n;
        long long M = 998244353;

        if (d == 0) {
            cout << 0 << '\n';
            continue;
        }

        long long term1 = power(10, n);
        term1 = (term1 - 1 + M) % M;

        long long inv9 = modInv(9);

        long long ans = (d * term1) % M;
        ans = (ans * inv9) % M;

        cout << ans << '\n';
    }
    return 0;
}