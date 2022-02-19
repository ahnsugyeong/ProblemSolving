#include <bits/stdc++.h>

using namespace std;
int N, M;
string x[50];

int searchSquare(int _i, int _j) {
    char pivot = x[_i][_j]; //왼쪽 위 점
    int max = 0;
    for (int i = _i + 1; i < N; i++) {
        //pivot 값이 나올때까지 아래로 이동
        if (x[i][_j] != pivot) continue;    //왼쪽 아래 점
        int gap = i - _i;  //정사각형의 한 변읙 길이(왼쪽 변)

        if (_j + gap > M) continue; //가로의 길이가 M을 넘어가면 pass
        if (x[i][_j + gap] != pivot) continue;  //오른쪽 아래 점
        if (x[_i][_j + gap] != pivot) continue; //오른쪽 위 점

        if (max < gap) max = gap;   //변의 길이가 가장 긴 정사각형
    }
    max++;
    return max * max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    int max = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int tmp = searchSquare(i, j);
            if (max < tmp) max = tmp;
        }
    }

    cout << max;

    return 0;
}