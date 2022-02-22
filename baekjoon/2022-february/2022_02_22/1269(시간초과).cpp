#include <bits/stdc++.h>

using namespace std;

vector<int> A, B, C, D, ans;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
        C.push_back(tmp);
    }
    for (int i = 0; i < b; i++) {
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
        D.push_back(tmp);
    }

    for (int i = 0; i < C.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (C[i] == B[j]) {
                C.erase(C.begin() + i);
                i--;
            }
        }
    }

    for (int i = 0; i < D.size(); i++) {
        for (int j = 0; j < A.size(); j++) {
            if (D[i] == A[j]) {
                D.erase(D.begin() + i);
                i--;
            }
        }
    }

    ans = C;
    for (int i = 0; i < D.size(); i++) {
        int flag = 0;
        for (int j = 0; j < ans.size(); j++) {
            if (D[i] == ans[j]) flag = 1;
        }
        if (!flag) C.push_back(D[i]);
    }
    cout << C.size();


    return 0;
}