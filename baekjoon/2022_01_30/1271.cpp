#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    if (N - K < K) K = N - K;

    int result = 1;
    for (int i = N; i > N - K; i--) {
        result *= i;
    }
    for (int i = K; i > 0; i--) {
        result /= i;
    }
    cout << result;
    return 0;
}