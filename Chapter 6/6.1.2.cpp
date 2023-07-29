#include<stdio.h>
int main()
{
//	double *fp,q;
//	
//	fp = &q;
//	
//	*fp = 100.23 ;
//	
//	printf("%lf",q);
//	printf("\n%lf", *fp);
//	printf("\n%d", fp);

	double *p,q,temp;
	
	temp = 1234.34 ;
	
	p = &temp;
	q = *p;
	
	printf("%f",q);
	
	return 0;
}
