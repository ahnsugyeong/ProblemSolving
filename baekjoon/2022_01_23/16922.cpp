#include <bits/stdc++.h>

using namespace std;

int N;
int result = 0;
int roma[] = { 1, 5, 10, 50 };

//50*20 = 1000
bool visited[1000 + 1];

void DFS(int cnt, int D, int total) {
    if (cnt == N) {
        if (visited[total] == false) {
            visited[total] = true;
            result++;
        }
        return;
    }
    for (int i = D; i < 4; i++) {
        DFS(cnt + 1, i, total + roma[i]);
    }
}

//중복 조합
int main(){
    scanf("%d", &N);
    DFS(0, 0, 0);
    cout << result << "\n";

    return 0;
}