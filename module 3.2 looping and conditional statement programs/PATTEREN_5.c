//PATTEREN 5.

#include<stdio.h>
int main()
{
	int r,c,n,q=1;
	printf("\n\n\t enter any number:");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",q);
			q++;
		}
		printf("\n");
	}
}
