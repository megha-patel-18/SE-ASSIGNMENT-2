// wap to find oout the max from given number.
#include<stdio.h>
int main()
{
	int a[10],size,i,largest, position;
	printf("\n\n\t enter the size of an array");
	scanf("%d",&size);
	printf("\n\n\t enter the element of an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	 largest =a[0];
	for(i=1;i<size;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
			position=i;
			
		}
	}
	printf("\n\n\t largest element in array :%d",largest);
	printf("\n\n\t position of the largest element:%d",position);
	return 0;
	
	
	
	
	
	
}
