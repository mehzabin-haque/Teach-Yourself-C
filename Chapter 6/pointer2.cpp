#include<stdio.h>
int main()
{
	int a[5] , i;
	int *q = a;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&q[i]); // &a[i] == (a+i) == (i+a) == (q+i)
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]); // a[i] == *(q+i) == *(a+i) == i[a] == i[q]
	}
	
	return 0;
}
