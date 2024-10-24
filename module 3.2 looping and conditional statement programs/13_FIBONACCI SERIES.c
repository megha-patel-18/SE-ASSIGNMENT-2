//wap to fibonacci seried up to given number.
#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,sum=0;
	
	printf("\n\n\t enter a number :");
	scanf("%d",&n);
	
	printf("fabonacci series up to %d ",n);
	printf("%d %d",a,b);
	
	for(i=3;i<=n; i++)
		{
			sum=a+b;
			printf(" \n %d",sum);
			a=b;
			b=sum;
		}
	    return 0;
}
