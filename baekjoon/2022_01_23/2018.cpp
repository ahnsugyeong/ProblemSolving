#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int cnt = 1;
    int result = 0;
    while (true) {
        int sum = cnt * (cnt + 1) / 2;
        if (sum > N) break;
        if ((N - sum) % cnt == 0) result++;
        cnt++;
    }

    printf("%d", result);
    return 0;
}