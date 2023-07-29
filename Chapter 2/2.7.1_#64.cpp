#include<stdio.h>

int XOR(int a , int b);

int main()
{
	int i,j;
	
	printf("Enter the numbers 0 or 1 : ");
	scanf("%d %d",&i,&j);
	
	//relational operations
	printf("i < j %d\n", i < j);
	printf("i <= j %d\n", i <= j);
	printf("i == j %d\n", i == j);
	printf("i > j %d\n", i > j);
	printf("i >= j %d\n", i >= j);
	
	//logical operations 
	printf("i && j %d(AND)\n", i && j);
	printf("i || j %d(OR)\n", i || j);
	printf("!i !j %d %d(NOT)\n", !i, !j);
	printf("i xor j %d\n",XOR(i,j));
	
	return 0;
}

int XOR(int a , int b)
{
	return ((a || b) && !(a && b));
}
