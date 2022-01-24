#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, R, C;
    cin >> N >> R >> C;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i % 2 == j % 2) {
                if ((R + C) % 2 == 0) printf("v");
                else printf(".");
            }
            else {
                if ((R + C) % 2 == 0) printf(".");
                else printf("v");
            }
        }
        printf("\n");
    }

    return 0;
}
