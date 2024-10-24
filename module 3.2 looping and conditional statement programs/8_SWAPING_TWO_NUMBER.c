// swap two numbers without using third varible.

#include<stdio.h>
main()
{
	int a ,b;
	printf("\n\n\t enter number 1 :");
	scanf("%d",&a);
	printf("\n\n\t enter number 2 :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	   printf("\n\n\t after swapping %d \n\n\t %d",a,b);
}
