#include <stdio.h>

int main() {
    int n;
	int area = 0;
	int i;
	int j;
	int k;
	int m;
	int mat[10][10] = {0};
	int cont = 0;
    int xi, xf, yi, yf;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) { 
        scanf("%d %d %d %d", &xi, &xf, &yi, &yf);
        for(j = xi; j <= xf; j++){
        	for(k = yi; k <= yf; k++){
        		mat[j][k] = 1;	
			}
		}
    }  
    for (i = 0; i < 10; i++){
    	for (j = 0; j < 10; j++){
    		if(mat[i][j] != 0){
    			cont++;
			}
		}
		printf("\n");
	}
	printf("%d", cont);
    return 0;
}

