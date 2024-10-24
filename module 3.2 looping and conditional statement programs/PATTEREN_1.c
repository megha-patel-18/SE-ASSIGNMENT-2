//patterns.

#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("\n\n\t enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			   printf("1",j);
			   else
			   printf("0");
		}
		printf("\n");
	}
}
