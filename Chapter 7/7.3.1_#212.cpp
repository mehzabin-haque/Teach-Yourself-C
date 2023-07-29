#include<stdio.h>

// exchange the values pointed to by two integer pointers
void swap(int *i,int*j)
{
	int temp ;
	temp = *i ;
	*i = *j ;
	*j = temp ;
}

int main()
{
	int num1 = 100 , num2 = 800 ;
	
	printf("num1 : %d num2 : %d \n",num1,num2);
	swap(&num1,&num2);
	printf("num1 : %d num2 : %d \n",num1,num2);
	
	return 0;
}
