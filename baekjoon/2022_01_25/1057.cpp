#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, a, b;
    cin >> N >> a >> b;
    int cnt = 0;
    while (true) {
        //printf("a =%d, b=%d\n", a, b);
        if(a == b) break;

        if (a % 2 == 0) a /= 2;
        else a = a / 2 + 1;

        if (b % 2 == 0) b /= 2;
        else b = b / 2 + 1;

        cnt++;
    }
    cout << cnt;
    return 0;
}