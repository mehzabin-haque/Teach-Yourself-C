#include<stdio.h>
int main()
{
	int i;
	float d,avg;
	//s=vt
	
	printf("Enter the number of drive time computation : ");
	scanf("%d",&i);
	
	/*for( ; i; i--)
	{
		printf("Enter the distance and the average speed : \n");
		scanf("%f %f",&d,&avg);
		printf("Driving time is : %f\n",d/avg);
	} */
	
	while(i)
	{
		printf("Enter the distance and the average speed : \n");
		scanf("%f %f",&d,&avg);
		printf("Driving time is : %f\n",d/avg);
		i--;
	}
	
	return 0;
}
