#include <bits/stdc++.h>

using namespace std;
int main(){
    string str[50];
    int t;
    cin >> t;

    while(t--){
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        r--;
        c--;

        for(int i=0;i<n;i++){
            cin >> str[i];
        }

        if (str[r][c] == 'B') {
            cout << 0 << "\n";
            continue;
        }

        int flag = 0;
        for(int i=0;i<n;i++){
            if(str[i][c] == 'B') {
                cout << 1 << "\n";
                flag = 1;
                break;
            }
        }
        if(flag == 1) continue;

        for(int j=0;j<m;j++){
            if(str[r][j] == 'B'){
                cout << 1 << "\n";
                flag = 1;
                break;
            }
        }
        if(flag == 1) continue;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(str[i][j] == 'B') flag = 1;
            }
        }
        if(flag == 0) cout << -1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}