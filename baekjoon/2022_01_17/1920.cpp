#include <bits/stdc++.h>
using namespace std;

int x[100000];

int findKey(int k, int l, int r) {
    if (l > r) return 0;

    int mid = (l + r) / 2;
    if(k == x[mid]) return 1;
    else if (k > x[mid]) {
        return findKey(k, mid + 1, r);
    }
    else return findKey(k, l, mid - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &x[i]);
    sort(x, x+N);
    int M;
    scanf("%d", &M);
    int key;
    for(int i=0;i<M;i++){
        scanf("%d", &key);
        int tmp = findKey(key, 0, N - 1);
        printf("%d\n", tmp);
    }






    return 0;
}