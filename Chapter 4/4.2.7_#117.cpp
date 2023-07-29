#include<stdio.h>
#include<conio.h>

int power(int m, int e);

int main()
{
	int m,e;
	
	m=3;
	e=3;
	
	printf("%d raised to the %d power is %d\n",m,e,power(m,e));
	printf("4 raised to the 5th power is %d\n",m,e,power(4,5));
	printf("3 raised to the 3rd power is %d\n",m,e,power(3,3));
	
	return 0;
}

// Parameterized version of power
int power(int m, int e)
{
	int temp;
	
	temp=1;
	
	for(;e>0;e--)
	{
		temp = temp * m ;
	}
	
	return temp ;
}

