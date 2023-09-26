#include<stdio.h>
int main()
{
	int arr[3][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("Enter %d array Elment = ",i+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("The value of %d array at index %d is %d \n",i+1,j+1,arr[i][j]);
		}
	}
	return 0;
}
