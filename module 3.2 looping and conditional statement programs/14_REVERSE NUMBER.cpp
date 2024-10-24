//wap to print number in reverse order.
#include<stdio.h>
int main()
{
	int num ,reverse=0;
	
	printf("\n\n\ enter a number");
	scanf("%d",num);
	
	while(num!=0)
	{
		int digit = num%10;
		reverse = reverse*10 + digit;
		num/=10;
	}
	printf("the reverse of the number is :%d\n",reverse);
	return 0 ;
}
