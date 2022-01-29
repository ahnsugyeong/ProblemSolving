#include <bits/stdc++.h>

using namespace std;

int N, M, K;

vector<pair<int, int>> v;
vector<pair<int, int>> q;

bool isNext(pair<int, int> a, pair<int, int> b){
    if(abs(a.first-b.first) + abs(a.second-b.second) == 1) return true;
    return false;
}

int solve(){
    int max_size = 0;
    int tmp_size = 0;

    while(!v.empty() || !q.empty()){
        if (!v.empty() && q.empty()) {
            if (max_size < tmp_size) max_size = tmp_size;
            tmp_size = 0;
            q.push_back(v.front());
            v.erase(v.begin());
        }

        //q에서 front를 pop 할 때마다 tmp_size 증
        pair<int, int> tmp = q.front();
        q.erase(q.begin());
        tmp_size++;

        for (vector<pair<int, int>>::iterator it = v.begin(); it != v.end();) {
            if (isNext(tmp, *it)) {
                q.push_back(*it);
                v.erase(it);
            }
            else it++;
        }
    }
    if(max_size < tmp_size) max_size = tmp_size;
    return max_size;
}

int main(){
    cin >> N >> M >> K;

    for(int i=0;i<K;i++){
        int r, c;
        cin >> r >> c;
        v.push_back(make_pair(r-1, c-1));
    }

    int result = solve();
    cout << result << "\n";

    return 0;
}