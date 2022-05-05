#include <bits/stdc++.h>

using namespace std;

int N, M;
int shark[50][50];
int safe[50][50];
//동, 서, 남, 북
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
void DFS(int x, int y, int dis){
    for(int i=0;i<4;i++){
        if(x+dx[i]<0||x+dx[i]>M-1||y+dy[i]<0||y+dy[i]>N-1) continue;

        if(shark[x+dx[i]][y+dy[i]] == 1){

        }

        DFS(x+dx[i], y+dy[i], dis+1);
    }

}

int main(){

    scanf("%d %d", &N, &M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d", &shark[i][j]);
        }
    }




    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ", shark[i][j]);
        }
        printf("\n");
    }
    return 0;
}