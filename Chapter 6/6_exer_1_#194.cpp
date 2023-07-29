#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[80] , *p;
	int spaces;
	
	printf("Enter a string : ");
	gets(str);
	
	spaces = 0;
	p = str;
	
	while(*p)
	{
		if(*p==' ')
		{
			spaces++ ;
		}
		p++;
	}
	
	printf("Number of spaces : %d",spaces);
	
	return 0;
}
