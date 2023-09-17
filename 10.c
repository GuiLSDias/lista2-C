#include <stdio.h>

int main(){
	int mat[25][25] = {0};
	int i;
	int j;
	int k; 
	int r; 
	int aux = 0;

	scanf("%d", &r);
	for (i = 0; i < r; i++){
        scanf("%d %d", &j, &k);
			mat[j][k]++;	
        }
    for (i = 0; i < 11; i++){
        for (j = 0; j < 11; j++){
            if(mat[i][j] > 1){
            	aux = 1;
				}
	        }
	    }
	system("cls");
	printf("%d", aux);
	return 0;
	}
