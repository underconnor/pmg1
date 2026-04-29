#include <stdio.h>

int main(void){
	int n;
	printf("단을 입력하세요 (2~9) : ");
	scanf("%d", &n);
	if (n<2 || n > 9){	
		printf("범위에 맞는 값을 입력해주세요.\n");
	} else{
		for (int i=1; i<10;i++){
			printf("%d x %d = %d\n", n, i, n * i);
		}
	}

	return 0;
}
