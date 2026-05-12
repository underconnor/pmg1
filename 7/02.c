#include <stdio.h>

int main(void) {
    int seats[5] = {0, 0, 0, 0, 0};
    int n;

    while (1) {
        printf("좌석 번호를 입력하세요(1~5, 종료 0): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("예매를 종료합니다.\n");
            break;
        }

        if (n < 1 || n > 5) {
            printf("잘못된 좌석 번호입니다.\n");
        } 
        else if (seats[n - 1] == 1) {
            printf("이미 예매된 좌석입니다.\n");
        } 
        else {
            seats[n - 1] = 1;
            printf("%d번 좌석이 예매되었습니다.\n", n);
        }
    }

    return 0;
}
