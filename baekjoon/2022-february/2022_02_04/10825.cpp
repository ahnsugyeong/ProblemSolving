#include <bits/stdc++.h>

using namespace std;

typedef struct student {
    string name;
    int korean;
    int english;
    int math;
} student;

bool compare(student a, student b) {
    if (a.korean == b.korean) {
        if (a.english == b.english) {
            if (a.math == b.math) {
                return a.name < b.name;
            }
            return a.math > b.math;
        }
        return a.english < b.english;
    }
    return a.korean > b.korean;
}

int main() {
    int N;
    cin >> N;
    student *s = new student[N];
    for (int i = 0; i < N; i++) {
        cin >> s[i].name >> s[i].korean >> s[i].english >> s[i].math;
    }
    sort(s, s + N, compare);
    for (int i = 0; i < N; i++) {
        cout << s[i].name << "\n";
    }
    return 0;
}