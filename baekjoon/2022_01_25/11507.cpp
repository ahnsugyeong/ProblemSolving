#include <bits/stdc++.h>
using namespace std;

int P[14];
int K[14];
int H[14];
int T[14];

int main(){
    string str;
    cin >> str;
    int num;
    for (int i=0;i<str.size();i++){
        if(i%3 == 0) num = 0;
        else if(i%3 == 1){
            num += (str[i]-'0')*10;
        }
        else if(i%3==2){
            num += str[i]-'0';
            if(str[i-2] == 'P') {
                if(P[num] != 0) {
                    printf("GRESKA\n");
                    return 0;
                }
                P[num]++;
            }
            else if(str[i-2] == 'K') {
                if(K[num] != 0) {
                    printf("GRESKA\n");
                    return 0;
                }
                K[num]++;
            }
            else if(str[i-2] == 'H') {
                if(H[num] != 0) {
                    printf("GRESKA\n");
                    return 0;
                }
                H[num]++;
            }
            else if(str[i-2] == 'T') {
                if(T[num] != 0) {
                    printf("GRESKA\n");
                    return 0;
                }
                T[num]++;
            }
        }
    }
    int p = 13, k=13,h=13,t=13;
    for(int i=1;i<=13;i++) {
        if(P[i]!=0) p--;
        if(K[i]!=0) k--;
        if(H[i]!=0) h--;
        if(T[i]!=0) t--;
    }
    cout << p << " " << k << " " << h << " " << t;
    return 0;
}