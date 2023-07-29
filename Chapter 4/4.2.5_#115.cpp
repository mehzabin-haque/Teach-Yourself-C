#include<stdio.h>
#include<conio.h>

void f1();

int i ;

int main()
{
	i = 10;
	
	f1();
	
	printf("i is main() : %d \n",i);
	
	return 0;
}

void f1()
{
	int i; // local i
	
	i= 100;
	
	printf("i is f1() : %d \n",i);
	
}
