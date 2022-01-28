#include <bits/stdc++.h>
using namespace std;

int maze[1000];
vector<int> result;
int N;

int dp[1000];
void search(int index, int len){

    if(index >= N) return;

    if(dp[index] == true){
        return dp[index];
    }
    if(maze[index] == 0) return;

    for(int i=1;i<=maze[index];i++){
        search(index+i, len+1);
    }

}

int main(){

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> maze[i];
    }

    search(0, 0);

    sort(result.begin(), result.end());
    cout << result[0];

    return 0;
}