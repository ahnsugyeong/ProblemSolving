#include <bits/stdc++.h>

using namespace std;
char arrow;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    cin.get();

    string order;
    while(T--){
        arrow = 'U';
        int x = 0, y = 0;
        vector<pair<int, int>> points;
        points.push_back(make_pair(0, 0));

        cin >> order;
        int max_x = 0, max_y = 0;
        int min_x = 0, min_y = 0;

        for(int i=0;i<order.size();i++){
            if(order[i] == 'F'){
                if(arrow == 'U') y++;
                else if(arrow == 'R') x++;
                else if(arrow == 'D') y--;
                else if(arrow == 'L') x--;
                points.push_back(make_pair(x, y));
            }
            else if(order[i] == 'B'){
                if(arrow == 'U') y--;
                else if(arrow == 'R') x--;
                else if(arrow == 'D') y++;
                else if(arrow == 'L') x++;
                points.push_back(make_pair(x, y));
            }
            else if(order[i] == 'R'){
                if(arrow == 'U') arrow = 'R';
                else if(arrow == 'R') arrow = 'D';
                else if(arrow == 'D') arrow = 'L';
                else if(arrow == 'L') arrow = 'U';
            }
            else if(order[i] == 'L'){
                if(arrow == 'U') arrow = 'L';
                else if(arrow == 'R') arrow = 'U';
                else if(arrow == 'D') arrow = 'R';
                else if(arrow == 'L') arrow = 'D';
            }
            if(x > max_x) max_x = x;
            if(x < min_x) min_x = x;

            if(y > max_y) max_y = y;
            if(y < min_y) min_y = y;
        }
        cout << abs((max_x-min_x)*(max_y-min_y)) << "\n";
    }
    return 0;
}