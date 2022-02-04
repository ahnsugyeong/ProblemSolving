#include <bits/stdc++.h>

using namespace std;

int minus_num[1000001];
int plus_num[1000001];
int zero_num;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == 0) zero_num = 1;
        else if (tmp < 0) minus_num[-tmp] = 1;
        else plus_num[tmp] = 1;
    }

    for (int i = 1000000; i > 0; i--) {
        if (plus_num[i] == 1) printf("%d\n", i);
    }
    if (zero_num == 1) printf("0\n");
    for (int i = 0; i <= 1000000; i++) {
        if (minus_num[i] == 1) printf("%d\n", -i);
    }
    return 0;
}