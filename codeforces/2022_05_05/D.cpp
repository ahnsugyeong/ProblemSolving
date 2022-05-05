#include <bits/stdc++.h>

using namespace std;

int toNum(string str){
    return str[0]-'a'+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;
    for(int i=0;i<str.size();i++){
        if(toNum(str.substr(i, 1)) > k){
            char cur = str[i];
            char tmp;
            if(cur - k < 'a'){
                tmp = 'a';
                k -= cur-tmp;
            }
            else{
                tmp = cur-k;
                k -= cur-tmp;
            }

            for(int j=0;j<str.size();j++){
                if(cur >= str[j] && str[j] > tmp) {
                    str[j] = tmp;
                }
            }
        }
        else{

        }
    }
    cout << str;


    return 0;
}
/*
 * abcdefghijklmnopqrstuvwxyz
 *  (c = 3, b = 2, a = 1)
 * cba
 * tmp = a
 *
 *
 *
 * cba
 * bba
 * aaa
 * (f = 6, g = 7, d = 4, e = 5)
 * k = 5
 * fgde
 * egde
 * dgdd
 * cgcc
 * bgbb
 * agaa
 *
 * (g = 7, n = 14, d = 4, c = 3, a = 1, f = 6, b = 2)
 * k = 5
 * gndcafb
 * fndcafb
 * endcaeb
 * dndcadb
 * cnccacb
 * bnbbabb
 *
 * 2 14
 *
 *
 * ////////////////////////////////////////////
 * 어떻게 처리해야 할지 모르겠다
 * (e = 5,  = 11, y = 25, v = 22)
 * k = 19
 * ekyv
 *
 * k -> 10
 * k = 9
 * aapp
 *
 *
 *
 *
 */