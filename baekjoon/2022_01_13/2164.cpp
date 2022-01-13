#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> Q;
    int N;
    scanf("%d", &N);

    for(int i=1;i<=N;i++){
        Q.push(i);
    }
    int i=0;
    while(Q.size() > 1) {
        if (i % 2 == 0) {
            Q.pop();
        } else {
            Q.push(Q.front());
            Q.pop();
        }
        i++;
    }
    printf("%d\n", Q.front());
    return 0;
}