#include<stdio.h>

void func1(int a) , func2(int b) ;

void func2(int b)
{
	printf(".");
	
	if(b)
	{
		func1(b-1);
	}
	
}

void func1(int a)
{
	if(a) func2(a-1);
	printf("%d ",a);
}

int main()
{
	func1(30) ;
	
	return 0;
}
