#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void myputs(char *p)
{
	while(*p)
	{
		// loop as long as p does not point to the null that terminates the string
		
		printf("%c",*p);
		p++ ;		// go to the next character
	}
	
	printf("\n");
}

int main()
{
	myputs("this is a test ");
	
	return 0;
}
