#include<stdio.h>
#include<conio.h>

int series();

int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		printf(" %d ",series());
	}
	
	return 0;
}

// this is incorrect
int series()
{
	int total;
	
	total = (total + 1423) % 1422 ;
	return total ;
}
