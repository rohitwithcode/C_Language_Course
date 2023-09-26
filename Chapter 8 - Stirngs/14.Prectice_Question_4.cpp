#include<stdio.h>
void strcpy(char arr[],char newarr[]){
	int i=0,j=0;
	while(arr[i] != '\0'){
		arr[i]=newarr[j];
		i++;
		j++;
	}
	printf("%s",arr);
}
int main()
{
	printf("Enter the first string = ");
	char str[50];
	fgets(str,50,stdin);
	printf("Enter the second string = ");
	char str1[50];
	fgets(str1,50,stdin);
	strcpy(str,str1);
	return 0;
}

