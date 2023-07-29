#include<stdio.h>
int main()
{
	int a[ ] = { 2,1,3,5,8 };
	int *q;
	
	printf("\t%p\n",*(a+1));
	printf("\t%p\n",*a+1);
	printf("\t%p\n",a+1);
	printf("\t%p",&a+1);
	
}
