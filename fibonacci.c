#include<stdio.h>

main()
{
	int a=0, b=1, c, n,i;
	printf("Enter the number of fibonacci ");
	scanf("%d" ,&n);
	printf("The value of fibonacci is %d\n"  ,n);
	for(i=0;i<n;i++)
	{
		if(i>=1)
		{
		c=a+b;
		a=b;
		b=c;
		}
	printf("%d\n", c);
	}	
}
