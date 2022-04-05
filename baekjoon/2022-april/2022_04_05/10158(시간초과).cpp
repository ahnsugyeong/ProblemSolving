#include <bits/stdc++.h>

using namespace std;

// 오른쪽 위, 왼쪽 위, 왼쪽 아래, 오른쪽 아래
int dx[] = {1, -1, -1, 1};
int dy[] = {1, 1, -1, -1};


int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    int p, q;
    scanf("%d %d", &p, &q);
    int t;
    scanf("%d", &t);

    int x = p, y = q;
    int cur = 0;
    for (int i = 0; i < t; i++) {
        if (x + dx[cur] > w) {
            if (cur == 0) cur = 1;
            else if (cur == 3) cur = 2;
        }
        if (x + dx[cur] < 0) {
            if (cur == 1) cur = 0;
            else if (cur == 2) cur = 3;
        }
        if (y + dy[cur] > h) {
            if (cur == 0) cur = 3;
            else if (cur == 1) cur = 2;
        }
        if (y + dy[cur] < 0) {
            if (cur == 2) cur = 1;
            else if (cur == 3) cur = 0;
        }
        x += dx[cur];
        y += dy[cur];
    }
    printf("%d %d\n", x, y);
    return 0;
}