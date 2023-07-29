#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[80];
	
	do
	{
		printf("Enter a string : ");
		gets(str);
	}while(strcmp("quit",str));
	
	return 0;
}
