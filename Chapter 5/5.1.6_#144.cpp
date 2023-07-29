#include<stdio.h>
int main()
{
	int a[10] ,i,j;
	
	printf("Enter 10 numbers : \n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1 ; j<10 ; j++)
		{
			if(a[i] == a[j])
			{
				printf("\nDuplicated number is %d ",a[j]);
			}
		}
	}
	
	
	return 0;
}
