//wap to reverse string and check string is palindrome or not.

#include<stdio.h>
int main()
{
	char str[30];
	int i,len,flag;
	flag=0;
	
	printf("\n\n\t enter any string:");
	scanf("%s",&str);
	
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n\n\t %s is a palindrome string",str);
	}
	else
	{
		printf("\n\n\t %s is not a palindrome string",str);
	}
	return 0;
}
