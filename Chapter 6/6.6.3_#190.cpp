#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i , *p , **mp ;
	
	p = &i ;
	mp= &p ;
	
	**mp = 1233 ;
	
	printf("%p %p %p",&i,p,mp);
	
	return 0;
}
