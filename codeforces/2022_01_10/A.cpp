#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> v;
        for(int i=0;i<n;i++) {
            int tmp;
            scanf("%d", &tmp);
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for(int i=0;i<n-1;i++){
            if(v[i] != v[i+1]) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
