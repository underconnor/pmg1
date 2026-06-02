#include <stdio.h>

int main(void){
	int matrix[3][3];
	int c_matrix[3][3];
	int tmp;
	

	for (int i=0; i<3;i++){
		for (int j=0; j<3; j++) scanf("%d", &matrix[i][j]);
	}
	
	// 전치행렬 c_matrix에 저장
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			c_matrix[i][j] = matrix[j][i];
		}
	}
	
	// matrix에 전치행렬 저장
	for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            matrix[i][j] = c_matrix[i][j];
        }
	}

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) printf("%d ", matrix[i][j]);
		printf("\n");
	}
	
	return 0;
}
