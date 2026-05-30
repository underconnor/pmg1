unsigned long long recursive_count = 0;

long long comb_recursive(int n, int r){
	recursive_count += 1;
	if (r<0||r>n) return 0;
	if (r == 0 || n == r) return 1;
	return comb_recursive(n-1, r-1) + comb_recursive(n-1, r);	
}
