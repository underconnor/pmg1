#include <stdio.h>

int is_prime(int n);

int main(void){
	int n;
	scanf("%d", &n);
	
	for (int i=1;i<=n;i++){
		if (is_prime(i)) printf("%d ",i);
	}
 	
	printf("\n"); //mac 터미널 뉴라인

	return 0;
}

// 소수 판독하는 함수
int is_prime(int n){
    if (n<2) return 0; // 1일떄 예외처리
    for (int i=2;i<n;i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
