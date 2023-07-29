#include<stdio.h>
int main()
{
	int *p,i;
	
	p = &i ;
	
	for(i=0;i<10;i++)
	{
		printf("\t%d",*p);
	}
	
	return 0;
}
