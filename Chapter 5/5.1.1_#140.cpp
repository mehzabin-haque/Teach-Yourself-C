#include<stdio.h>
#include<conio.h>
int main()
{
	int sqrs[10];
	int i;
	
	for(i=1;i<11;i++)
	{
		sqrs[i-1] = i*i ;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d  ",sqrs[i]);
	}
	
	return 0;
}
