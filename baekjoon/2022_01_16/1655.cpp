#include <bits/stdc++.h>
using namespace std;


int Heap[100001];
int tmp_H[100001];

int isRoot(int i){
    if (i == 1) return 1;
    else return 0;
}

void upHeap(int H[], int i){
    if (isRoot(i)) return;
    if (H[i] <= H[i / 2]) return;
    int tmp = H[i];
    H[i] = H[i / 2];
    H[i / 2] = tmp;
    upHeap(H, i / 2);
}
int insertItem(int H[], int *n, int key){
    *n += 1;
    H[*n] = key;
    upHeap(H, *n);
}

void downHeap(int H[], int i, int n){
    if (i * 2 > n) return;
    int bigger = i * 2;
    if (i * 2 + 1 <= n){
        if (H[bigger] < H[i * 2 + 1])
            bigger = i * 2 + 1;
    }
    if (H[bigger] <= H[i]) return;

    int tmp = H[i];
    H[i] = H[bigger];
    H[bigger] = tmp;

    downHeap(H, bigger, n);
}

void inPlaceHeapSort(int H[], int n){
    if (n == 0) return;
    int tmp = H[n];
    H[n] = H[1];
    H[1] = tmp;
    n--;
    downHeap(H, 1, n);
    inPlaceHeapSort(H, n);
}

int main(){
    int N;
    int n=0;
    scanf("%d", &N);
    int key;
    for(int i=1;i<=N;i++){
        scanf("%d", &key);
        insertItem(Heap, &n, key);
        for(int j=1;j<=n;j++){
            tmp_H[j] = Heap[j];
        }

        inPlaceHeapSort(tmp_H, n);

        if(i==1) printf("%d\n", Heap[1]);
        else {
            if(i%2==0){
                if(tmp_H[i/2]>tmp_H[i/2+1]) printf("%d\n", tmp_H[i/2+1]);
                else printf("%d\n", tmp_H[i/2]);
            }
            else printf("%d\n", tmp_H[i/2+1]);
        }
    }

    return 0;
}