#include <stdio.h>

void count_grades(int score[], int size, int count[]);

int main(void){
	int score[10] = {45,60,67,76,72,88,83,91,98,95};
	int count[5]={0};
	count_grades(score,10,count);	
	for (int i=0;i<5;i++) printf("%d ", count[i]);
	return 0;
}

void count_grades(int score[], int size, int count[]){
	int s;
	for (int i=0; i<size; i++){
		s = score[i];
		if (s>=90) count[4] += 1;
		else if (s>=80) count[3] += 1;
		else if (s>=70) count[2] += 1;
		else if (s>=60) count[1] += 1;
		else count[0] += 1;
	}
}
