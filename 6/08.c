#include <stdio.h>

int main(void) {
    int n;
    int count = 0;

    printf("n을 입력하세요 : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
		int j;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
        }

        if (i==j) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n소수의 개수 : %d\n", count);

    return 0;
}
