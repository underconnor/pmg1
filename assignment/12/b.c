#include <stdio.h>

void hanoi(int n, char from, char to, char other);

int main(void){
	int n;
	scanf("%d", &n);
	hanoi(n,'A','C','B');
	return 0;
}

void hanoi(int n, char from, char to, char other){
	if (n==0) return;
	hanoi(n-1,from,other,to);
	printf("%d 번 원반을 %c에서 %c로 이동\n", n, from, to);
	hanoi(n-1,other, to, from);
}

