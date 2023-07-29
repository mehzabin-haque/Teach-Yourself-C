#include<stdio.h>

int mystrlen(char *p)
{
	int i=0;
	
	while(*p)
	{
		i++;
		p++;
	}
	
	return i;
}

int main()
{
	char str[80];
	
	printf("Enter a string : ");
	gets(str);
	
	printf("Length is %d",mystrlen(str));
	
	return 0;
}
