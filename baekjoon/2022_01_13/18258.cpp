#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    queue<int> Q;
    int N;
    cin >> N;
    cin.get();
    for(int i=0;i<N;i++){
        string order;
        cin >> order;
        cin.get();
        if(order.compare("push")==0){
            int X;
            cin >> X;
            Q.push(X);
        } else if(order.compare("pop")==0){
            if(Q.empty()) cout << -1 << "\n";
            else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if(order.compare("size")==0){
            cout << Q.size() << "\n";
        } else if(order.compare("empty")==0){
            cout << Q.empty() << "\n";

        } else if(order.compare("front")==0){
            if(Q.empty()) cout << -1 << "\n";
            else cout << Q.front() << "\n";

        } else if(order.compare("back")==0){
            if(Q.empty()) cout << -1 << "\n";
            else cout << Q.back() << "\n";
        }
    }
    return 0;
}