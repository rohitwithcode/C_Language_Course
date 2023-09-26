#include<stdio.h>
typedef struct Date
{
	int year;
	int month;
	int date;
	int hour;
	int minutes;
	int seconds;
	
}D;

void display1(D d)
{
	printf("The Timestamp Format is : %d-%d-%d/%d:%d:%d \n",d.date,d.month,d.year,d.hour,d.minutes,d.seconds);
}
int main()
{
	D d={2023,9,13,11,31,55};
	display1(d);
//	int a=dateCompare(d,d1);
//	printf("Date comparison = %d",a);
}
