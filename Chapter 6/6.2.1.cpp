#include<stdio.h>
int main()
{
	char *cp , ch;
	int *ip , i;
	float *fp , f;
	double *dp , d;
	
	cp = &ch;
	ip = &i ;
	fp = &f ;
	dp = &d ;
	
	// print the current values
	printf("%p %p %p %p\n",cp,ip,fp,dp);
	
	// now increment them by one
	
	cp++ ; // 1 byte
	ip++ ; // 4 byte
	fp++ ; // 4 byte
	dp++ ; // 8 byte
	
	// print their new values
	printf("%p %p %p %p\n",cp,ip,fp,dp);
	
	return 0;
}
