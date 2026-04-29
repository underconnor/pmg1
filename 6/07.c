#include <stdio.h>

int main(void){
	int a,b, menu=0;

	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	do {
		printf("--- 메뉴 ---\n");
		printf("1. 덧셈 \n");
		printf("2. 뺄셈 \n");
		printf("3. 곱셈 \n");
		printf("4. 나눗셈 \n");
		
		printf("선택 : ");
		scanf("%d", &menu);

		switch (menu){
			case 1:
				printf("%d + %d = %d\n", a,b, a+b);
				break;
			case 2:
				printf("%d - %d = %d\n", a,b, a-b);
				break;
			case 3:
				printf("%d * %d = %d\n", a,b, a*b);
				break;
			case 4:
				if (b==0) printf("0으로 나눌 수 없습니다.\n");
				printf("%d / %d = %d\n", a,b, a/b);
		}

	} while (menu != 0);

	printf("프로그램을 종료합니다.\n");

	return 0;
}
