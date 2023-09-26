#include<stdio.h>
void GoodMorning();
void GoodAfterNoon();
void GoodNight();
int main()
{
	GoodMorning();
	return 0;
}
void GoodMorning()
{
	printf("Good Morning\n");
	GoodAfterNoon();
}
void GoodAfterNoon()
{
	printf("Good After Noon \n");
	GoodNight();
}
void GoodNight()
{
	printf("Good Night\n");
}
