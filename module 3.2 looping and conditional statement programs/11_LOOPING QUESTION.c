/*wap to  take 10 no. inputform user find out below value:
a.how many even number are there
b. how many odd number are there
c.sum of even number
d.sum of odd number.*/

#include<stdio.h>
int main()
{
	int num, i, evencount=0,oddcount=0,evensum=0,oddsum=0;
	i=1;
	while(i<=10)
	{
		printf("enter your number %d:",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			evencount++;
			evensum+=num;
		}
		else
		{
			oddcount++;
			oddsum+=num;
		}
		i++;
	}
	printf("\n even mumbers :%d\n",evencount);
	printf("odd numbers:%d\n",oddcount);
	printf("sum of even number:%d\n",evensum);
	printf("sum of odd numbers:%d\n",oddsum);
	
	return 0;
}
