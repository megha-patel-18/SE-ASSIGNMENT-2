//wap to make simple calculator with opration include...
#include<stdio.h>
main()
{
	int a ,b,z,q;
	printf("\n\n\t press 1 for addition:");
	printf("\n\n\t press 2 for subtraction:");
	printf("\n\n\t press 3 for multiplication:");
	printf("\n\n\t press 4 for division:");
	printf("\n\n\t press 5 for modulo:");
	
	printf("enter a choice from (1-5):");
	scanf("%d",&a);
	
	printf("\n\n\t enter 1st digit :");
	scanf("%d",&z);
	printf("\n\n\t enter 2nd digit :");
	scanf("%d",&q);
	
	if(a==1)
	printf("\n\n\t addition of %d and %d is =%d",z,q,z+q);
	
	else if (a==2)
	printf("\n\n\t subtraction of %d and %d is =%d",z,q,z-q);
	
	else if(a==3)
	printf("\n\n\t multiplication of %d and %d is =%d",z,q,z*q);
	
	else if (a==4)
	printf("\n\n\t division of %d and %d is = %d",z,q,z/q);
	
	else if (a==5)
	printf("\n\n\t modulo of %d and %d is = %d",z,q,z%q);
	
	else
	printf("\n\n\t invalid choice");
	
    	
}
