#include<stdio.h>
typedef struct Date
{
	int year;
	int month;
	int date;
}D;
void display(D d)
{
	printf("The Date is : %d/%d/%d \n",d.date,d.month,d.year);
}
int dateCompare(D d,D d1)
{
	if(d.year>d1.year)
	{
		return 1;
	}
	if(d.year<d1.year){
		return -1;
	}
	if(d.month>d1.month)
	{
		return 1;
	}
	if(d.month<d1.month){
		return -1;
	}
	if(d.date>d1.date)
	{
		return 1;
	}
	if(d.date<d1.date){
		return -1;
	}
	return 0;
}
int main()
{
	D d={4,9,2025};
	D d1={4,9,2025};
	display(d);
	display(d1);
	int a=dateCompare(d,d1);
	printf("Date comparison = %d",a);
}
