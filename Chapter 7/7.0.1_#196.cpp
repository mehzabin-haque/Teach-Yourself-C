#include<stdio.h>

int main()
{
	double d, *p;
	
	p = &d ;
	
	*p = 12.33 ;
	
	printf("%f",d);
	
	return 0;
}
