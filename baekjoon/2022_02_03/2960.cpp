//에라토스테네스의 체

#include <bits/stdc++.h>

using namespace std;

int eratosthenes[1001];
vector<int> primeNum;

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 2; i <= N; i++) {
        if (eratosthenes[i] == 1) continue;
        primeNum.push_back(i);
        for (int j = i; j <= N; j += i) {
            if (eratosthenes[j] == 1) continue;
            eratosthenes[j] = 1;
            K--;
            if (K == 0) {
                printf("%d\n", j);
                return 0;
            }
        }
    }


    return 0;
}