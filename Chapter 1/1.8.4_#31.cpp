#include<stdio.h>

void func(void);

int main()
{
	func();
	
	return 0;
}

void func(void)
{
	printf("This is printed.");
	return ; // return with no value
	printf("This is never printed.");
}
