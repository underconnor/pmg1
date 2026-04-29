#include <stdio.h>

int main(void){
	int a,b;
	char op = ' ';
	while (1){
		printf("수식을 입력하세요 (종료: q) : ");
		if (scanf("%d", &a) != 1){
			scanf(" %c", &op);
			if (op=='q') break;
		}
		scanf(" %c %d",&op,&b);
		
		switch (op){
			case '+':
			printf("%d + %d = %d\n", a,b,a+b);
			break;
			case '-':
				printf("%d - %d = %d\n",a,b,a-b);
				break;
			case '*':
				printf("%d * %d = %d\n", a,b,a *b);
				break;
			case '/':
				if (b==0){
					printf("0으로 나눌 수 없습니다.\n"); 
					break;
				}
				printf("%d / %d = %d\n",a,b,a/b);
				break;
			case '%':
				if (b==0) {
					printf("0으로 나눌 수 없습니다.\n"); 
					break;
				}
				printf("%d %% %d = %d\n",a,b, a % b );
				break;
			default:
				printf("잘못된 연산자입니다.\n");
		}

	}
	printf("계산기를 종료합니다.\n");

	return 0;
}
