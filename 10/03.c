#include <stdio.h>
#include <time.h>

long long comb_recursive(int n, int r);
long long comb_iterative(int n, int r);

extern unsigned long long recursive_count;
extern unsigned long long loop_count;

int main(void){
	int n,r;
	long long r_result, i_result;
	clock_t start, end;
	double r_time, i_time;

	scanf("%d %d", &n, &r);
	
	start = clock();
	r_result = comb_recursive(n,r);
	end = clock();
	r_time = (double)(end-start) / CLOCKS_PER_SEC;

	start = clock();
	i_result = comb_iterative(n,r);
	end = clock();
	i_time = (double)(end-start) / CLOCKS_PER_SEC;
	
	printf("Recursive result: %lld\n", r_result);
    printf("Recursive call count: %llu\n", recursive_count);
    printf("Recursive time: %.6f seconds\n\n", r_time);

    printf("Iterative result: %lld\n", i_result);
    printf("Loop count: %llu\n", loop_count);
    printf("Iterative time: %.6f seconds\n", i_time);

	
	return 0;
}
