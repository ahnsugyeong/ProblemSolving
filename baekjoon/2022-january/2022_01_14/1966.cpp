#include <bits/stdc++.h>
using namespace std;

bool checkImportance(vector<int> Q){
    int value = Q[0];
    for(int i=0;i<Q.size();i++){
        if(value < Q[i]) return false;
    }
    return true;
}
int main(){
    int T;
    scanf("%d", &T);

    int N, M;

    while(T--){
        int order = 0;

        scanf("%d %d", &N, &M);

        int index = M;
        vector<int> Q(N);
        for(int i=0;i<N;i++){
            scanf("%d", &Q[i]);
        }
        while(!Q.empty()) {
            if (checkImportance(Q)) {
                order++;
                Q.erase(Q.begin());
                if(index == 0){
                    printf("%d\n", order);
                    break;
                }
                index--;
            }
            else{
                Q.push_back(Q.front());
                Q.erase(Q.begin());
                if(index == 0){
                    index = Q.size()-1;
                }
                else index--;
            }
        }
    }
    return 0;
}