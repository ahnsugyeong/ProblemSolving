#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b) {
    if (a % b == 0) return b;
    return GCD(b, a % b);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    cin >> A >> B;

    long long cnt = GCD(A, B);

    for (long long i = 0; i < cnt; i++) {
        cout << 1;
    }

    return 0;
}