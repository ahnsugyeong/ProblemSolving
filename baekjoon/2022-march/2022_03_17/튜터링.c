#include<stdio.h>

int main() {
    int A;
    int B, C, D;
    char tmp_B, tmp_C, tmp_D;

    scanf("%d", &A);
    getchar();
    scanf("%c%c%c", &tmp_B, &tmp_C, &tmp_D);
    B = tmp_B - '0';
    C = tmp_C - '0';
    D = tmp_D - '0';

    printf("%d\n", A * D);
    printf("%d\n", A * C);
    printf("%d\n", A * B);
    int a = A * D;
    int b = A * C * 10;
    int c = A * B * 100;

    printf("%d", a + b + c);

    return 0;
}