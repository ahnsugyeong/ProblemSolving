#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> permutation;
vector<int> prev_arr;
vector<int> result;

int compare[10001];
bool chosen[10001];

void search() {
    if (permutation.size() == n) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (permutation[i] == compare[i]) {
                cnt++;
            }
        }
        if (cnt == n) result = prev_arr;
        prev_arr = permutation;
    } else {
        for (int i = 1; i <= n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> compare[i];
    }
    search();

    if (result.size() == 0) cout << -1 << "\n";
    else {

        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}