#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string str) {
    int cnt = 0;
    int i = 0, j = str.size() - 1;

    while (i <= j) {
       // printf("str[%d] = %c, str[%d] = %c\n",i,str[i],j,str[j]);
        if (str[i] != str[j]) {
            if (cnt == 0) {
                cnt++;

                // abbab
                // babba
                if (str[i] == str[j - 1]) j--;
                else if (str[i + 1] == str[j]) i++;

                else return 2;
            }
            else return 2;
        }
        i++;
        j--;
    }
    if (cnt == 0) return 0;
    else return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        cout << isPalindrome(str) << "\n";
    }
    return 0;
}