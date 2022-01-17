#include <bits/stdc++.h>

using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> s;
    int n;
    cin >> n;
    cin.get();

    string name, order;
    for(int i=0;i<n;i++){
        cin >> name >> order;

        if(order == "enter"){
            s.insert(name);
        }
        else if(order == "leave"){
            s.erase(name);
        }
    }



    for(auto iter = s.rbegin();iter!=s.rend();iter++){
        cout << *iter << "\n";
    }
    return 0;
}