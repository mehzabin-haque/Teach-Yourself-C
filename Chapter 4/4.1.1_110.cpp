#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned u;
	long l;
	short s;
	
	printf("Enter an unsigned num : ");
	scanf("%u",&u);
	printf("Enter a long num : ");
	scanf("%ld",&l);
	printf("Enter a short num : ");
	scanf("%hd",&s);
	
	printf("%u %ld %hd ",u,l,s);
	
	return 0;
}
