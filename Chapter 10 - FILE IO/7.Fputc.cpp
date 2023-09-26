#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("putc.txt","w");
	char c;
	putc('R',ptr);
	return 0;
}
