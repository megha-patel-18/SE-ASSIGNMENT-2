//Pattern 2
#include<stdio.h>
main()
{
	int n,i,j;
	char alphabet='A';
	
	printf("\n\n\t enter the number of rows:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",alphabet);
			alphabet++;
		}
		printf("\n");
	}
}
