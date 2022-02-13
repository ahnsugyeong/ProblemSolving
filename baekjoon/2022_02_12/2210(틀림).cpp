#include <bits/stdc++.h>
#define N 5
using namespace std;

int digit[N][N];
bool visit[100000];
int cnt =0;
int _x[4] = {0,0,-1,1 };
int _y[4] = {1,-1,0,0 };
void DFS(int num, int x,int y, int len){
    if(len == 6){
        if(visit[num] == false) {
            visit[num] = true;
            printf("%d\n", num);
            cnt++;
        }
        return;
    }
    for(int i=0;i<4;i++){
        if(x+_x[i] >=0 && x+_x[i] <=4 && y+_y[i] >=0 && y+_y[i] <=4) DFS(num*10+digit[x][y], x+_x[i], y+_y[i], len+1);
    }
}

int main(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> digit[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            DFS(0,i,j,1);
        }
    }

    cout << cnt;



    return 0;
}