#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> V;
bool visited[200000];
int N, M;
/*
 * 3 2
 * 1 2
 * 2 3
 *
 * Q -> 1
 */
int solve() {
    int ans = 1;
    for (int i = 1; i <= N; i++) {
        if(visited[i]) continue;

        int flag = 0;
        for (int j = 0; j < V.size(); j++) {
            if (V[j].first == i || V[j].second == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) continue;

        queue<int> Q;   //정점의 번호
        Q.push(i);
        visited[i] = true;
        int size = 0;
        while (!Q.empty()) {
            int cur = Q.front();
            Q.pop();
            size++;
            for (int j = 0; j < V.size(); j++) {

                if (V[j].first == cur) {
                    if(visited[V[j].second]) continue;
                    Q.push(V[j].second);
                    visited[V[j].second] = true;
                }
                else if (V[j].second == cur) {
                    if(visited[V[j].first]) continue;
                    Q.push(V[j].first);
                    visited[V[j].first] = true;
                }
            }
        }
        if(size >= 1000000007) size %= 1000000007;
        ans *= size;

    }
    return ans;
}


int main() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        V.push_back(make_pair(a, b));
    }

    printf("%d", solve());
    return 0;
}