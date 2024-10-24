//wap to find out length of string without using inbuilt function.
#include<stdio.h>
int main()
{
	 char str[30];
	 int length =0;
	 printf("\n\n\t enter any string:");
	 scanf("%s",&str);
	   while(str[length]!='\0')
	   {
	   	length++;
	   }
	   printf("\n\n\t length of string = %d",length);
	   return 0;
}
