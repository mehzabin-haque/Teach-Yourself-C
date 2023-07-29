#include<stdio.h>
#include<conio.h>

int x=10; // initialize global variable

int myfunc(int i);

int main()
{
	int y = x ; // initialize a local variable using a global variable
	
	// initialize a local variable using another local variable and a function call
	int z = myfunc(y) ;
	
	printf("%d  %d",y,z);
	
	return 0;
}

int myfunc(int i)
{
	return i/2 ;
}
