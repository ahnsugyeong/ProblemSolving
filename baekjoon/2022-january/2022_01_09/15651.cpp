#include <bits/stdc++.h>
#define MAX 9
using namespace std;
int N, M;
int arr[MAX];
bool visited[MAX];

void print(){
    for(int i=0;i<M;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void dfs(int cnt){
    if(cnt == M){
        print();
        return;
    }
    for(int i=1;i<=N;i++){

        visited[i] = true;
        arr[cnt] = i;
        dfs(cnt+1);
        visited[i] = false;
    }
}

int main(){
    scanf("%d %d", &N, &M);
    dfs(0);
}