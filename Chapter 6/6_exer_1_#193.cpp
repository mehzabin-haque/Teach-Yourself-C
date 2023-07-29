#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,*p;
	
	p = &i;
	
	*p = 1233 ;
	
	printf("%d",i);
	
	return 0;
}
