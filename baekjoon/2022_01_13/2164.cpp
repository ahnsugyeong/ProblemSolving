#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> Q;
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        Q.push(i);
    }

    for(int i=0;i<N;i++){

        if(i%2==0){
            Q.pop();
        }
        else{
            Q.push(Q.front());
            Q.pop();
        }
    }
    printf("%d\n", Q.front());
    return 0;
}