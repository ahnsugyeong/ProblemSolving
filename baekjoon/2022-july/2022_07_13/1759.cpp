#include <bits/stdc++.h>

using namespace std;

int n, m;

bool arr[26] = {0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1};


void dfs(string s, int now, int depth, vector<char> alphabets) {

    if (depth == n) {
        int za = 0;
        int mo = 0;
        for (int i = 0; i < s.length(); i++) {

            if (arr[s[i] - 97]) {
                za++;
            } else {
                mo++;
            }
        }
        if (za >= 2 && mo >= 1) {
            cout << s << endl;
        }
        return;
    }

    for (int i = now + 1; i <= m - n + depth; i++) {
        dfs(s + alphabets[i], i, depth + 1, alphabets);
    }


}

/*
n -> 만들 길이 m -> 주어진 개수
4 6
a t c i s w

a, 0, 1
t, 1, 1
 */
int main() {


    cin >> n >> m;


    vector<char> alphabets(m);


    for (int i = 0; i < m; i++) {
        cin >> alphabets[i];
    }

    sort(alphabets.begin(), alphabets.end());

    string s = "";

    for (int i = 0; i <= m - n; i++) {
        dfs(s + alphabets[i], i, 1, alphabets);
    }
    //dfs(s, 0, 1, alphabets);
    return 0;
}