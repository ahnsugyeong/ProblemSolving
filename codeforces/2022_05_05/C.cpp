#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        int last_one = -1;
        int first_zero = -1;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                last_one = i;
            }
            if (first_zero == -1 && str[i] == '0') first_zero = i;
        }

        int ans;
        if (last_one == -1 & first_zero != -1) ans = first_zero + 1;
        else if (last_one != -1 & first_zero == -1) ans = str.size() - last_one;
        else if (last_one == -1 & first_zero == -1) ans = str.size();
        else if (last_one != -1 & first_zero != -1) {
            if (last_one > first_zero) ans = 1;
            else ans = first_zero - last_one + 1;
        }


        cout << ans << "\n";
    }
    return 0;
}
/*
 * 마지막 1부터 처음 0까지 용의자
 *
 * 11?1?0
 * 111001 -> 범인은 무조건 마지막놈
 * */
