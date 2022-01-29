#include <bits/stdc++.h>

using namespace std;

typedef struct Country {
    int name;
    int gold;
    int silver;
    int bronze;
} Country;

int K;

bool compare(Country a, Country b) {
    if (a.gold == b.gold) {
        if (a.silver == b.silver) {
            if (a.bronze == b.bronze) {
                if (a.name == K) {
                    return true;
                }
                if (b.name == K) {
                    return false;
                }
            }
            return a.bronze > b.bronze;
        }
        return a.silver > b.silver;
    }
    return a.gold > b.gold;
}

int main() {

    int N;
    scanf("%d %d", &N, &K);

    Country *countries = new Country[1000];
    for (int i = 0; i < N; i++) {
        cin >> countries[i].name >> countries[i].gold >> countries[i].silver >> countries[i].bronze;
    }

    sort(countries, countries + N, compare);
    for (int i = 0; i < N; i++) {
        if (K == countries[i].name) printf("%d", i + 1);
    }
    return 0;
}