#include <stdio.h>
#include <math.h>

double my_distance(double x1, double y1, double x2, double y2);

int main(void){
	double x1,y1,x2,y2;
	
	printf("%f",my_distance(0,0,3,4));

	return 0;
}

double my_distance(double x1, double y1, double x2, double y2){
	double dx = x2-x1;
	double dy = y2-y1;

	return sqrt(dx*dx + dy*dy);
}
