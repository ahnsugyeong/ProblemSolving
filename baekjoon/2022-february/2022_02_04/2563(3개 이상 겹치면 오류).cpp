#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;
int main() {
    int N;
    scanf("%d", &N);
    int total = 100*N;
    for(int i=0;i<N;i++){
        int x, y;
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }
    for(int i=0;i<N-1;i++) {
        for (int j = i+1; j < N; j++) {
            int x_gap = abs(v[i].first - v[j].first);
            int y_gap = abs(v[i].second - v[j].second);
           // printf("%d %d\n", x_gap, y_gap);
            if (x_gap < 10 && y_gap < 10) {
                total -= (10 - x_gap) * (10 - y_gap);
            }
        }
    }
    printf("%d", total);
    return 0;
}