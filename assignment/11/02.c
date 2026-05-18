#include <stdio.h>

void print_bin(unsigned int n);

int main(void){
    int number, n, bit;
    unsigned int result;

    scanf("%d %d %d", &number, &n, &bit);
	
	//예외처리
    if (n < 0 || n > 31){
        printf("n은 0부터 31 사이의 정수여야 합니다.\n");
        return 0;
    }

    if (bit != 0 && bit != 1){
        printf("마지막 값은 0 또는 1이어야합니다.\n");
        return 0;
    }
	
    if (bit == 1){
        result = (unsigned int)number | (1U << n);
    }
    else{
        result = (unsigned int)number & ~(1U << n);
    }
	
	printf("1에서 입력받은\n");
    printf("number 16진수: %#X \n", (unsigned int)number);
    printf("number 2진수: ");
    print_bin((unsigned int)number);
    printf("\n");

	printf("4에서 산출된\n");
    printf("result 16진수: %#X \n", result);
    printf("result 2진수: ");
    print_bin(result);
    printf("\n");

    return 0;
}
//이진수 출력 코드가 길어 함수로 뻄
void print_bin(unsigned int n){
    for (int i=31;i>=0;i--){
        printf("%d", (n >> i) & 1);
		//보기좋게 4단위 끊기
        if (i % 4 == 0){
            printf(" ");
        }
    }
}
