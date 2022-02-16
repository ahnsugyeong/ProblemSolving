#include <bits/stdc++.h>

using namespace std;

bool flag[50][50];
int N, M;

bool checkRow(int i){
    for(int j=0;j<M;j++){
        if(flag[i][j] == true) return true;
    }
    return false;
}

bool checkColumn(int j){
    for(int i=0;i<N;i++){
        if(flag[i][j] == true) return true;
    }
    return false;
}

int cnt;

void solve(){
    for(int i=0;i<N;i++){
        if(checkRow(i)) continue;
        int j;
        for(j=0;j<M;j++){
            if(checkColumn(j) == false){
                break;
            }
        }
        cnt++;
        flag[i][j] = true;
    }

    for(int j=0;j<M;j++){
        if(checkColumn(j)) continue;
        int i;
        for(i=0;i<N;i++){
            if(checkRow(i) == false){
                break;
            }
        }
        cnt++;
        flag[i][j] = true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    cin.get();

    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            flag[i][j] = false;
        }
    }

    //입력받기
    for(int i=0;i<N;i++){
        string tmp;
        cin >> tmp;
        for(int j=0;j<M;j++){
            if(tmp[j] == 'X'){
                flag[i][j] = true;
            }
        }
    }

    cnt = 0;
    solve();
    cout << cnt;

}
