#include<stdio.h>
#include<conio.h>

void f1();

int max ; // this is a global variable

int main()
{
	max = 10;
	
	f1();
	
	return 0;
}

void f1()
{
	int i;
	
	for(i=0;i<max;i++)
	{
		printf(" %d ",i);
	}
}
