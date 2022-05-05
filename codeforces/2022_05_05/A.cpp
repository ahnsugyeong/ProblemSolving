#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        bool flag = false;
        //개, 고양이, 범용
        int a, b, c, x, y;
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
        x -= a;
        y -= b;
        if (x <= 0 && y <= 0) flag = true;
        if (x > 0 && y > 0) {
            if (x + y <= c) flag = true;
        } else if (x > 0 && y <= 0) {
            if (x <= c) flag = true;
        } else if (x <= 0 && y > 0) {
            if (y <= c) flag = true;
        }

        if (flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}