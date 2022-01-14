#include <bits/stdc++.h>
using namespace std;
void goLeft(deque<int> D){

}

void goRight(deque<int> D){

}

int findIndex(deque<int> D, int e){
    for(int i=0;i<D.size();i++){
        if(D.at(i) == e) return i;
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    deque<int> D;
    for(int i=1;i<=N;i++) D.push_back(i);

    int selected[50];
    for(int i=0;i<M;i++) scanf("%d", &selected[i]);
    int index = 0;
    int cnt = 0;

    while(M != index){
        int i = findIndex(D, selected[index]);
        int leftGap = i;
        if(leftGap < 0) leftGap *= -1;
        int rightGap = D.size() - leftGap - 1;
        if(rightGap < 0) rightGap *= -1;

        if(leftGap <= rightGap){
            cnt+=leftGap;
            while(leftGap--) {
                D.push_back(D.front());
                D.pop_front();
            }
        }
        else{
            rightGap++;
            cnt+=rightGap;
            while(rightGap--) {
                D.push_front(D.back());
                D.pop_back();
            }
        }

        D.pop_front();
        index++;
    }
    printf("%d\n", cnt);

    return 0;
}