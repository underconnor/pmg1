#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main(void){
    int a,b;
    int g,l;

    printf("첫 번째 정수 입력: ");
    scanf("%d", &a);
    printf("두 번째 정수 입력: ");
    scanf("%d", &b);

    g = gcd(a,b);
    l =lcm(a,b);

    printf("\n최대공약수: %d\n", g);
    printf("최소공배수: %d\n", l);

    return 0;
}

int gcd(int a, int b){
    int r;

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}
