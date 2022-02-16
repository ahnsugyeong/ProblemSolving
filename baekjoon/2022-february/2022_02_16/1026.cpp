#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int *A = new int[N];
    int *B = new int[N];
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d", &B[i]);
    }

    sort(A, A+N);
    sort(B, B+N);
    for(int i=0;i<N;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    for(int i=0;i<N;i++){
        printf("%d ", B[i]);
    }
    return 0;
}