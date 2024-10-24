//wap to structure of five employee...

#include<stdio.h>
struct employee
{
	int empno;
	char empname[20];
	char empaddress[40];
	int empage;
};

display employee ( struct employee emp)
{
	printf("enter no : %d",emp.empno);
	printf("enter name :%s",emp.empname);
	printf("enter address :%s",emp.empaddress);
	printf("enter age: %d",emp.empage);
	
}
main()
{
	struct employee [5];
	for (int i=0; i<5;i++)
	{
		printf("\n\n\t enter details o\for employee :%d",i+1);
		
		printf("enter employee number:");
		scanf("%d",employee[i].empno);	
		
		printf("enter employee name :");
		scanf("%s",employee[i].empname);
		
		printf("enter employee address:");
		scanf("%s",employee[i].empaddress);
		
		printf("enter employee age :");
		scanf("%d",employee[i].empage);
		
		printf("\n");
	}
	
	printf("employee detail ");
	for(int i=0;i<5;i++)
	{
		display employee [i];
	}
		
		
		
		
		
		
		
			
		
			
}


