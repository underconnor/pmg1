#include <stdio.h>

int main(void){
    int in_h, in_m;
    int out_h,out_m;
    int in_t,out_t;
    int park_t;
    int fee;

    printf("입차 시각 입력: ");
    scanf("%d %d", &in_h, &in_m);

    printf("출차 시각 입력: ");
    scanf("%d %d", &out_h, &out_m);

    in_t = in_h * 60 + in_m;
    out_t= out_h * 60 + out_m;

    if(out_t < in_t){
        out_t = out_t + 24 * 60;
    }

    park_t=out_t - in_t;

    if(park_t <= 30){
        fee = 1000;
    } else {
        fee=1000 + ((park_t - 30 + 9) / 10) * 500;
    }
	
	if (fee > 20000) fee = 20000;

    printf("\n주차 시간: %d분\n", park_t);
    printf("주차 요금: %d원\n", fee);

    return 0;
}
