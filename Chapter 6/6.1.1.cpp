#include<stdio.h>
int main()
{
	int *p,q;
	
	q = 199 ;
	p = &q ;
	
	printf("%d", *p);
	printf("\n%d",p);
	printf("\n%d",q);
	
	return 0;
}
