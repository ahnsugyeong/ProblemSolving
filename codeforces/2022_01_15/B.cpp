#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int max = n + m - 2;
        int min;
        if(n > m) min = n - 1;
        else min = m - 1;
        cout << max << " " << min << "\n";
        for(int i=0;i<n*m;i++){

        }
    }
    return 0;
}