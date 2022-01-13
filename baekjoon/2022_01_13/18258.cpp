#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    queue<int> Q;
    int N;
    scanf("%d", &N);
    getchar();
    for(int i=0;i<N;i++){
        string order;
        cin >> order;
        getchar();
        if(order.compare("push")==0){
            int X;
            scanf("%d", &X);
            Q.push(X);
        } else if(order.compare("pop")==0){
            if(Q.empty()) printf("-1\n");
            else {
                printf("%d\n", Q.front());
                Q.pop();
            }
        } else if(order.compare("size")==0){
            printf("%d\n", Q.size());
        } else if(order.compare("empty")==0){
            printf("%d\n", Q.empty());

        } else if(order.compare("front")==0){
            if(Q.empty()) printf("-1\n");
            else printf("%d\n", Q.front());

        } else if(order.compare("back")==0){
            if(Q.empty()) printf("-1\n");
            else printf("%d\n", Q.back());
        }
    }
    return 0;
}