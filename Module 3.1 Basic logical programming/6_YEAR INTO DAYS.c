#include<stdio.h>
main()
{
	float years,days,x,y;
	printf("\n\n\t enter number of year:");
	scanf("%f,",&years);
	
	printf("\n\n\t enter number of days :");
	scanf("%f",&x);
	
	days=years*366;
	y=x/366;
	
	printf("\n\n\t %.2f years is total %.2f days",years,days);
	 printf("\n\n\t %.2f days is is total %.2f years",x,y);
}
