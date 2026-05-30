unsigned long long loop_count=0;

long long comb_iterative(int n, int r){
	long long result=1;
	// 예외처리
	if (r<0||r>n) return 0;
	if (r > n-r) r = n-r;

	for (int i=1; i<=r;i++){
		loop_count += 1;
		result = result * (n-r + i) / i;
	}
	return result;
}
