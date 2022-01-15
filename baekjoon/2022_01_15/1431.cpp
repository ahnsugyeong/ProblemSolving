#include <bits/stdc++.h>

using namespace std;

int getSum(string str){
    int result = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9') result += str[i]-'0';
    }
    return result;
}

bool compare(string a, string b){
    if(a.length() == b.length()){
        if(getSum(a) == getSum(b)) return a < b;
        else return getSum(a) < getSum(b);
    }
    else return a.length() < b.length();
}

int main(){
    int N;
    scanf("%d", &N);
    vector<string> V;
    for(int i=0;i<N;i++){
        getchar();
        string tmp;
        cin >> tmp;
        V.push_back(tmp);
    }

    sort(V.begin(), V.end(), compare);
    for(int i=0;i<N;i++){
        cout << V.at(i) << "\n";
    }
    return 0;
}