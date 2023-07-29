#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	float r;
	char ch;
	
	printf("Which one's area do you want to compute??\n");
	printf("\t\n1.Circle \t\n2.Rectangle \t\n3.Triangle ");
	printf("\nEnter the first letter : ");
	ch = getche();
	printf("\n");
	
	if(ch == 'C' || ch == 'c')
	{
		printf("Enter the radius of the circle : ");
		scanf("%f",&r);
		printf("\nArea of circle is : %f",3.14*r*r);
	}
	
	else if(ch == 'R' || ch == 'r')
	{
		printf("Enter the length and width of the rectangle : ");
		scanf("%d %d",&a,&b);
		printf("\nArea of rectangle is : %d",a*b);
	}
	
	else if(ch == 'T' || ch == 't')
	{
		printf("Enter the height and base of the triangle : ");
		scanf("%d %d",&a,&b);
		printf("\nArea of triangle is : %d",0.5*a*b);
	}
	
	return 0;
}
