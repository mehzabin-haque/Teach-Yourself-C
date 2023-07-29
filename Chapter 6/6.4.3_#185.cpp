#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *a = "one" , *b = "two" , *c = "three" ;
	
	printf(" %s %s %s \n",a,b,c);
	printf(" %s %s %s \n",a,c,b);
	printf(" %s %s %s \n",b,a,c);
	printf(" %s %s %s \n",b,c,a);
	printf(" %s %s %s \n",c,b,a);
	printf(" %s %s %s \n",c,a,b);
	
	return 0;
}
