//wap of addition,substraction,multiplication,division using swtich case.

#include<stdio.h>
main()
{
	int choice;
	float num1,num2,result;
	
	while(1)
	{
		printf("\n\n\t calculator menu------------------");
		printf("\n\n\t 1.addition:");
		printf("\n\n\t 2.substraction:");
		printf("\n\n\t 3.multiplication:");
		printf("\n\n\t 4.division:");
		printf("\n\n\t 5.exit:");
		
		printf("enter your choice(1-5)");
		scanf("%d",&choice);
		
		if(choice==5)
{
	printf("exiting the program");
	break;
		}
		printf("enter first number:");
		scanf("%f",&num1);
		printf("enter second number:");
		scanf("%f",&num2);
		
		switch (choice)
		{
			case 1 :
				result =num1+num2;
				printf("result:%.2f  + %.2f = %.2f",num1,num2,result);
				break;
				
			case 2 :
			     result = num1-num2;
			    printf("result:%.2f  - %.2f = %.2f",num1,num2,result);
			    break;
			    
			 case 3 :
			     result =num1*num2;
			     printf("result:%.2f  * %.2f = %.2f",num1,num2,result);
			     break;
			     
			 case 4 :
			 	if(num2!=0)
			 	{
				 
				 
			      result = num1/num2;
				  printf("result:%.2f  / %.2f = %.2f",num1,num2,result); 
				  break;   
			}
			else 
			{ 
			printf("error: division by zero is not allowed ");
			}
			break;
			default:
				printf("invalid choice try again:");
				break;
				  
				 				 	
		}
				
	}
	return 0;
}
