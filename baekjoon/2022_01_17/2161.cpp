#include <bits/stdc++.h>

using namespace std;
deque<int> D;

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++) D.push_front(i);

    for(int i=0;i<N;i++){
        printf("%d ", D.back());
        D.pop_back();

        D.push_front(D.back());
        D.pop_back();
    }

    return 0;
}