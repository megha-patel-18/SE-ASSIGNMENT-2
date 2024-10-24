// wap to make summation of given number .
#include<stdio.h>
int main()
{
	int number, reminder,sum=0;
	printf("\n\n\t enter any number");
	scanf("%d",&number);
	while(number>0)
	{
		reminder = number %10;
		sum=sum+reminder;
		number = number /10;
	}
	printf("\n\n\t sum of the digit of given number = %d",sum);
	return 0;
}
