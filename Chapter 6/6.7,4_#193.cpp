#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void a(int *p)
{
	*p = -100 ;
}

int main()
{
	int i;
	
	a(&i) ;
	
	printf("%d",i);
	
	return 0;
}
