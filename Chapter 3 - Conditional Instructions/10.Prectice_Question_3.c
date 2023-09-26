#include<stdio.h>
int main()
{
	printf("Enter the year ");
	int year;
	scanf("%d",&year);
	if(year/4){
		if(year/100){
			if(year/400){
				printf("%d is leap year\n",year);
			}
		}
	}
	return 0;
}
