#include <bits/stdc++.h>

using namespace std;

int main(){

    while(true) {
        stack<char> S;
        string str;
        getline(cin, str);
        if(str.compare(".")==0) break;
        int flag = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == '[' || str[i] == '('){
                S.push(str[i]);
            }
            else if(str[i] == ']'){
                if(S.empty()) {
                    printf("no\n");
                    flag = 1;
                    break;
                }
                if(S.top() == '['){
                    S.pop();
                }
                else {
                    printf("no\n");
                    flag = 1;
                    break;
                }
            }
            else if(str[i] == ')'){
                if(S.empty()) {
                    printf("no\n");
                    flag = 1;
                    break;
                }
                if(S.top() == '('){
                    S.pop();
                }
                else {
                    printf("no\n");
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1) continue;

        if(S.empty()){
            printf("yes\n");
        }
        else printf("no\n");
    }

    return 0;
}