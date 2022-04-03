#include <bits/stdc++.h>

using namespace std;

set<int> S;
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    while(N--){
        string order;
        cin >> order;
        if(order == "add"){
            int tmp;
            cin >> tmp;
            S.insert(tmp);
        }
        else if(order == "remove"){
            int tmp;
            cin >> tmp;
            S.erase(tmp);
        }
        else if(order == "check"){
            int tmp;
            cin >> tmp;
            if(S.find(tmp) == S.end()) cout << 0 << "\n";
            else cout << 1 << "\n";
        }
        else if(order == "toggle"){
            int tmp;
            cin >> tmp;
            if(S.find(tmp) == S.end()) {
                S.insert(tmp);
            }
            else {
                S.erase(tmp);
            }
        }
        else if(order == "all"){
            S.clear();
            for(int i=1;i<=20;i++) S.insert(i);
        }
        else if(order == "empty") S.clear();



    }
    return 0;
}