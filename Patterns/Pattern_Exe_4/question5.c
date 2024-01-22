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
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	else
	{
		for(j=5;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=9-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
		
	}
	
	return 0;
}