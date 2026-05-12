#include <stdio.h>

int main(void){
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);

	for (int i=0; i<n;i++){
		for (int j =1; j<=n-i;j++){
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
