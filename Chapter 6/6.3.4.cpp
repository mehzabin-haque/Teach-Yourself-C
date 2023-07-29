#include<stdio.h>
int main()
{
	char str[80];
	
	*(str+3) = 'C' ;
	printf("%c",*(str+3));
	
	return 0;
}
