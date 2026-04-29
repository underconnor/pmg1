#include <stdio.h>

int main(void)
{
    int a = 0, b = 5;
    a || printf("A 출력\n");
    a && printf("B 출력\n");
    b || printf("C 출력\n");
    b && printf("D 출력\n");
	
    return 0;
}


/*A 출력
D 출력

결과가 나온다.
왜나하면 먼저, 첫번쨰 줄 or(||) 에서 a가 0 이므로 뒤에 printf 까지 실행하게 되어 출력되고,
두번쨰 줄은 and에서 a가 0이므로 뒤에까지 실행하지 않고 넘어간다.

세번째 줄은 b가 0이 아닌 정수이므로 참이여서 or 뒤에 수식이 실행되지 않고,
네번째 줄은 and 이고, 앞 수식이 참이므로 뒤 수식까지 실행된다.

*/
