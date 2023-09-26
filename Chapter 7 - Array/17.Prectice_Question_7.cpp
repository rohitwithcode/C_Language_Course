#include<stdio.h>
int main()
{
	int arr[2][2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				printf("The address of [%d][%d][%d] array is %u\n",i,j,k,&arr[i][j][k]);
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
