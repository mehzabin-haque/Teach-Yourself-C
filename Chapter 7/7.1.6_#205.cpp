#include<stdio.h>

int count;

int *init(int x)
{
	count = x;
	
	return &count; // return a pointer
}

int main()
{
	int *p;
	
	p = init(110) ; //return a pointer
	
	printf("Count (through p) is %d ", *p);
	
	return 0;
}
