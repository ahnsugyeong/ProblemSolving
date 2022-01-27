#include <bits/stdc++.h>

using namespace std;
vector<int> a;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    if (prev_permutation(a.begin(), a.end())) {
        for (int i = 0; i < N; i++) cout << a[i] << " ";
    }
    else cout << -1 << "\n";

    return 0;
}