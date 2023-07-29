#include<stdio.h>
int main()
{
	char str[80], *p ;
	
	printf("Enter a string : ");
	gets(str) ;
	
	p = str ;
	
//	While Not at the end of the string And no space has been encountered,
//	increment p to point to next character 

	while(*p && *p!=' ')
	{
		p++ ;
	}
	
	printf(p);
	
	return 0;
}
