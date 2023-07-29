#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	for(i=0;i<100;i++)
	{
		printf("%d ",i);
		continue;
		printf("%d",i+3); // this will never executed
	}
	
	return 0;
}
