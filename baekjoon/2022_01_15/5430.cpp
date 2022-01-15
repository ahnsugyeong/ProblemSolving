#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    getchar();
    while(T--){
        deque<int> D;
        string order;
        cin >> order;

        int n;
        scanf("%d", &n);
        getchar();

        string tmp;
        cin >> tmp;
        for(int i=0;i<tmp.length()-1;i++){
            int num;
            if(tmp[i] == '[' || tmp[i] == ','){
                continue;
            }
            if(tmp[i]=='1'&&tmp[i+1]=='0'&&tmp[i+2]=='0'){
                num = 100;
                i+=2;
            }
            else if(tmp[i+1] >='0' && tmp[i+1] <= '9'){
                num = (tmp[i]-'0')*10 + tmp[i+1]-'0';
                i++;
            }
            else num = tmp[i]-'0';

            D.push_back(num);
        }

        int flag = 0;
        bool reverse = false;
        for(int i=0;i<order.length();i++){

            if(order[i] == 'R'){
                reverse = !reverse;
            }
            else if(order[i] == 'D'){
                if(D.empty()) {
                    printf("error\n");
                    flag = 1;
                    break;
                }
                if(reverse) D.pop_back();
                else D.pop_front();
            }
        }
        if(flag == 1) continue;

        printf("[");

        if(!D.empty()) {
            if(reverse){
                while (D.size() != 1) {
                    printf("%d,", D.back());
                    D.pop_back();
                }
                printf("%d", D.back());
            }
            else {
                while (D.size() != 1) {
                    printf("%d,", D.front());
                    D.pop_front();
                }
                printf("%d", D.front());
            }
        }
        printf("]\n");

    }
    return 0;
}