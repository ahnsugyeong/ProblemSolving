#include <bits/stdc++.h>

using namespace std;

int maze[1000];
int N;

int dp[1000];

void solve(int i) {
    if (maze[i] == 0) return;

    for (int j = 1; j <= maze[i]; j++) {
        if (i + j > N) break;
        if (maze[i + j] == 0) continue;

        if (dp[i + j] == 0) {
            dp[i + j] = dp[i] + 1;
            solve(i + j);
        } else {
            if (dp[i + j] > dp[i] + 1) {
                dp[i + j] = dp[i] + 1;
                solve(i + j);
            }
        }
    }
}


int main() {

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> maze[i];
    }

    solve(0);


    if (N == 1) cout << 0;
    else if (dp[N - 1] == 0) cout << -1;
    else cout << dp[N - 1];

    return 0;
}