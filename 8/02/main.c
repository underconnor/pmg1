#include <stdio.h>

extern int hours;
extern int minutes;
extern int seconds;

extern int bill10000;
extern int bill5000;
extern int bill1000;

void convert_time(int sec);
void calculate_bill(int n);

int main(void) {
    int op;
    int input;

    printf("1. 시간 변환 기능 2. 지폐 계산 기능\n");
    printf("번호를 선택하세요 : ");
    scanf("%d", &op);

    if (op== 1) {
        printf("초를 입력하세요 : ");
        scanf("%d", &input);

        convert_time(input);

        printf("%d초는 %d시간 %d분 %d초입니다.\n", input, hours, minutes, seconds);
    } else if (op == 2) {
        printf("금액을 입력하세요 : ");
        scanf("%d", &input);

        calculate_bill(input);

        printf("10000원 지폐 : %d개\n", bill10000);
        printf("5000원 지폐 : %d개\n", bill5000);
        printf("1000원 지폐 : %d개\n", bill1000);
    } else {
		printf("메뉴 번호가 잘못되었습니다.\n");
	}

    return 0;
}
