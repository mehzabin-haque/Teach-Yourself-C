#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p, **mp, str[80] ;
	
	p = str ;
	mp = &p ;
	
	printf("Enter your name : ");
	gets(*mp);
	printf("Hi %s ", *mp);
	
	return 0;
}
