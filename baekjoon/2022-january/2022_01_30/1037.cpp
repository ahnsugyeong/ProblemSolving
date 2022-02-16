#include <bits/stdc++.h>

using namespace std;

int num[1000000];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    sort(num, num + N);

    printf("%d\n", num[0] * num[N - 1]);

    return 0;
}