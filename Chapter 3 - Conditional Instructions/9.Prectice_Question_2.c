#include<stdio.h>
int main()
{
	int income;
	printf("Enter your income ");
	scanf("%d",&income);
	if(income<=250000){
		printf("You are safe you no need to pay income tax\n");
	}
	else if(income>250000 && income<500000){
		int tax=0;
		tax=tax+0.05*(income=250000);
		printf("You have to pay %d income tax ",tax);
	}
	else if(income>=500000 && income<=1000000){
		int tax=0;
		tax=tax+0.10*(income-500000);
		printf("You have to pay %d income tax ",tax);
	}
	else if(income>1000000){
		int tax=0;
		tax=tax+0.20*(income-1000000);
		printf("You have to pay %d income tax ",tax);
	}
	return 0;
}
