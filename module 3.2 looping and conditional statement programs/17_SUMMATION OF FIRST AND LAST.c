// wap to make summation of first digit and last digit.
#include<stdio.h>
int main()
{
	int number,firstdigit,count,lastdigit,sum=0;
	printf("\n\n\t enter any number");
	scanf("%d",&number);
	count=log10(number);
	firstdigit=number/pow(10,count);
	
	lastdigit = number%10;
	
	sum=firstdigit+lastdigit;
	printf("\n\n\t the sum of the  first digit %d and last digit %d of %d = %d",firstdigit ,lastdigit
,number,sum);
	}
