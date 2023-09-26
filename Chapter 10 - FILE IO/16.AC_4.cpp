#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Text.txt","r");
	char c;
	
	printf("Character = %c\n",fgetc(ptr));
	printf("Character = %c\n",fgetc(ptr));
	printf("Character = %c\n",fgetc(ptr));
	printf("Character = %c\n",fgetc(ptr));
	printf("Character = %c\n",fgetc(ptr));
	fclose(ptr);
	return 0;
}
