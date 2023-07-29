#include<stdio.h>
int main()
{
	/*int i = 100;
	
	for(;i>0;i--)
	{
		printf(" %d ",i);
	} */
	
	char ch;
	int i;
	float f;
	double outcome;
	
	ch = '0';
	i  = 10;
	f  = 10.2;
	
	outcome = ch * i / f ;
	
	printf("%lf",outcome );
	
	return 0;
}
