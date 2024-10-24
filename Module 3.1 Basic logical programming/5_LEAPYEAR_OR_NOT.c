// wap to check if the given year is a leapyear or not.

#include<stdio.h>
main()
{
	int a ;
	printf("\n\n\t enter a year : ");
	scanf("%d",&a);
	
	if(a%a==0)
	printf("\n\n\t %d is a leap year ",a);
	else
	  printf("\n\n\t %d is not a leap year",a);
}
