#include<stdio.h>
int main()
{
	float i;
	
	for(i=1.0;(int) i<=9;i=i+.01)
	{
		printf("%f ",i);
	}
	
	return 0;
}
