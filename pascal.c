#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int arrTriangle[10][10] = {0};
	
	arrTriangle[0][0] = arrTriangle[1][0] = arrTriangle[1][1] = 1;
	int row = 2,col = 0,i,j;
	int size = 10;
	
	while(row!=size){
		arrTriangle[row][0] = 1;
		for(col=1;col<=row;col++)
			arrTriangle[row][col] = arrTriangle[row-1][col-1] + arrTriangle[row-1][col];
		row++;
	}
	
	for(i = 0;i<size;i++){
		printf("\n ");
		for(j=0;j<size;j++)
		if(arrTriangle[i][j])
			printf("%d ",arrTriangle[i][j]);
	}
	
	return 0;
}
