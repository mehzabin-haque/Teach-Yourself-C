#include<stdio.h>

void recurse(int i)
{
	if(i<10)
	{
		printf("%d\t",i);
		recurse(i+1) ; // recursive call
//		recurse(i+1) ; // recursive call
//		printf("%d\t",i);
	}
}

int main()
{
	recurse(0);
	
	return 0;
}
