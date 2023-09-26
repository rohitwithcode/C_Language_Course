#include<stdio.h>
typedef struct Date
{
	int hour;
	int minutes;
	int seconds;
}D;
void display(D d)
{
	printf("The Time is : %d:%d:%d \n",d.hour,d.minutes,d.seconds);
}
//int dateCompare(D d,D d1)
//{
//	if(d.year>d1.year)
//	{
//		return 1;
//	}
//	if(d.year<d1.year){
//		return -1;
//	}
//	if(d.month>d1.month)
//	{
//		return 1;
//	}
//	if(d.month<d1.month){
//		return -1;
//	}
//	if(d.date>d1.date)
//	{
//		return 1;
//	}
//	if(d.date<d1.date){
//		return -1;
//	}
//	return 0;
//}
int main()
{
	D d={4,9,20};
	D d1={6,59,29};
	display(d);
	display(d1);
//	int a=dateCompare(d,d1);
//	printf("Date comparison = %d",a);
}
