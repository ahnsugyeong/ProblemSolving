#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    if (A > B) swap(A, B);

    for (long long i = B; i <= A * B; i++) {
        if (i % A == 0 && i % B == 0) {
            printf("%lld", i);
            break;
        }
    }

    return 0;
}