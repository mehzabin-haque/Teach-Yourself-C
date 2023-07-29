#include<stdio.h>
#include<conio.h>

void f();

int main()
{
	/* int i = -1 ;
	
	printf("i is initialized to %d ",i); */
	
	f();
	f();
	f();
	
	return 0;
}

void f()
{
	int i=10;
	
	printf(" %d ",i);
}
