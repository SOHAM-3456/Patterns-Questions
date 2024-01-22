#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
	if(i<=4){
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		if(i!=1){
			printf("*");
		}
		else
		{
			printf(" *");
		}
		
		for(j=1;j<=i-1;j++)
		{
			printf("  ");
		}
		if(i!=1)
		{
			printf("*");
		}
	
		printf("\n");
	}
	else
	{
		for(j=5;j<=i;j++)
		{
			printf(" ");
		}
		
		if(i!=8){
			printf("*");
		}
		else
		{
			printf(" *");
		}
		for(j=1;j<=8-i;j++)
		{
			printf("  ");
		}
		if(i!=8)
		{
			printf("*");
		}
		printf("\n");
	}
		
	}
	
	return 0;
}