#include<stdio.h>

void sum(int x,int y);

int main()
{
	sum(1,20);
	sum(9,6);
	sum(81,9);
	sum(10-2,8*9);
	
	return 0;
}

void sum(int x,int y)
{
	printf("\t%d\n",x+y);
}
