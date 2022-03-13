#include <bits/stdc++.h>

using namespace std;

bool G[200000][200000];
int N, M;

int solve(){
    int ans = 1;
    for(int i=1;i<=N;i++) {
        int flag = 0;
        for(int j=1;j<=N;j++){
            if(G[i][j]) flag = 1;
        }
        if(flag == 0) continue;
        queue<int> Q;   //정점의 번호
        Q.push(i);
        int size = 0;
        while (!Q.empty()) {
            int cur = Q.front();
            Q.pop();
            size++;
            for (int j = 1; j <= N; j++) {
                if (G[cur][j]) {
                    Q.push(j);
                    G[cur][j] = false;
                    G[j][cur] = false;
                }
            }
        }
        ans *= size % 1000000007;
    }
    return ans;
}


int main(){
    scanf("%d %d", &N, &M);
    for(int i=0;i<M;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        G[a][b] = true;
        G[b][a] = true;
    }
    printf("%d", solve());
    return 0;
}