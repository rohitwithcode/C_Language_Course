#include<stdio.h>
#include<string.h>
struct bank
{
	int accountNo;
	float balance;
	char userName[50];
	char year[50];
};
int main()
{
	struct bank b;
	b.accountNo=5;
	b.balance=54544.44;
	strcpy(b.userName,"Rohit");
	strcpy(b.year,"13/09/2023");
	
	printf("The Name of the Bank User = %s \n",b.userName);
	printf("The Account No. of the Bank User = %d \n",b.accountNo);
	printf("The  Balance = %f of the Bank Account No. = %d and Account User %s \n",b.balance,b.accountNo,b.userName);
	printf("The  Balance = %f of the Bank Account No. = %d and Account User %s in Date -> %s \n",b.balance,b.accountNo,b.userName,b.year);
	return 0;
}
