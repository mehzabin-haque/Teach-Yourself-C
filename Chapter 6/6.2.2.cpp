#include<stdio.h>
int main()
{
	int *p,q;
	
	p = &q ;
	q = 1;
	printf("\t%p\n",p);
	
//	*p++ ; // this will not increment q
//	
//	printf("\t%d \t%p\n",q,p);
	
	(*p)++ ; // now q is incremented and p is unchanged 
	
	printf("\t%d \t%p",q,p);
	
	return 0;
}
