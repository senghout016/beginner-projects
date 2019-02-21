#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter you money ");
	scanf("%d" ,&a);
	printf("Enter the price ");
	scanf("%d" ,&b);
	if (a>=b)
	{
		c=a-b;
		printf("this is the change %d " ,c);
	}
	else
	{
		printf("your monney is not enough ");
	}
	
	
	
}
