#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Odd_Number.txt","w");
	int n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if(i%2!=0)
		{
			fprintf(ptr,"%d ",i);
		}
	}
	return 0;
}
