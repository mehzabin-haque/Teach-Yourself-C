#include<stdio.h>

void func1(void);
void func2(void);

int main()
{
	func1();
	
	return 0;
}

void func1(void)
{
	func2();
	printf(" the sunshine patriot.");
}

void func2(void)
{
	printf("The summer soldier,");
}
