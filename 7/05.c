#include <stdio.h>

int main(void){
    int n;
    int a=0,b = 1;
    int next;
    int count = 0;
    int last = 0;

    printf("정수 입력 : ");
    scanf("%d", &n);

    printf("%d 이하의 피보나치 수: ", n);

    while(a <= n){
        printf("%d ", a);
        last = a;
        count++;

        next = a + b;
        a=b;
        b = next;
    }

    printf("\n피보나치 수 개수: %d\n", count);
    printf("마지막 피보나치 수: %d\n", last);

    return 0;
}
