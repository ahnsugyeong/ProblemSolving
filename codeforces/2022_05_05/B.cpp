#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[30];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int cnt = 0;
        for (int i = n - 1; i > 0; i--) {
            while (a[i] <= a[i - 1]) {
                if (a[i] == a[i - 1] && a[i] == 0) {
                    cnt = -1;
                    break;
                }
                a[i - 1] /= 2;
                cnt++;
            }
            if (cnt == -1) break;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
/*
 * 3 6 5
 *
 */