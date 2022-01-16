#include <bits/stdc++.h>
using namespace std;


int H[100001];

void upHeap(int i){
    if (i == 1) return;
    if (H[i] >= H[i / 2]) return;
    int tmp = H[i];
    H[i] = H[i / 2];
    H[i / 2] = tmp;
    upHeap(i / 2);
}
void downHeap(int i, int n){
    if (i * 2 > n) return;
    int smaller = i * 2;
    if (i * 2 + 1 <= n){
        if (H[smaller] > H[i * 2 + 1])
            smaller = i * 2 + 1;
    }
    if (H[smaller] >= H[i]) return;

    int tmp = H[i];
    H[i] = H[smaller];
    H[smaller] = tmp;

    downHeap(smaller, n);
}

int main(){
    int N;
    scanf("%d", &N);
    int n = 0;
    for(int i=1;i<=N;i++){
        int order;
        scanf("%d", &order);
        if(order != 0){
            n++;
            H[n] = order;
            upHeap(n);
        }
        else{
            if(n==0) {
                printf("0\n");
                continue;
            }

            printf("%d\n", H[1]);
            H[1] = H[n];
            n--;
            downHeap(1, n);
        }
    }
    return 0;
}