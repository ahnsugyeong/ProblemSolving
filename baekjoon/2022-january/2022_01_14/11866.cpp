#include <bits/stdc++.h>

using namespace std;
int main(){
    int N, K;
    scanf("%d %d", &N, &K);

    queue<int> Q1;
    queue<int> Q2;

    for(int i=1;i<=N;i++){
        Q1.push(i);
    }

    //printf("Q1 size = %d, Q2 size = %d\n", Q1.size(), Q2.size());
    //printf("empty status Q1 = %d, Q2 = %d\n", Q1.empty(), Q2.empty());

    int cnt = 0;

    printf("<");
    while(!Q1.empty() || !Q2.empty()){
        if(!Q1.empty()){
            cnt++;
            if(cnt == K){
                if(Q1.size()+Q2.size() == 1) printf("%d>", Q1.front());
                else printf("%d, ", Q1.front());
                Q1.pop();
                cnt = 0;
            }
            else {
                Q2.push(Q1.front());
                Q1.pop();
            }
        }
        else if(!Q2.empty()){
            while(!Q2.empty()){
                Q1.push(Q2.front());
                Q2.pop();
            }
        }
    }

    return 0;
}