#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> G(200001);
vector<bool> visited(200001);
int N, M;

long long BFS(){
    long long ans = 1;
    for(int i=1;i<=N;i++) {
        if(visited[i]) continue;
        queue<int> Q;   //정점
        Q.push(i);
        visited[i] = true;
        int size = 0;
        while (!Q.empty()) {
            int cur = Q.front();
            Q.pop();
            size++;
            for (int j = 0; j < G[cur].size(); j++) {
                if (!visited[G[cur][j]]) {
                    Q.push(G[cur][j]);
                    visited[G[cur][j]] = true;
                }
            }
        }

        ans *= size;
        if(ans >= 1000000007) ans %= 1000000007;
    }
    return ans;
}


int main(){
    scanf("%d %d", &N, &M);

    for(int i=0;i<M;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    printf("%lld", BFS());
    return 0;
}
