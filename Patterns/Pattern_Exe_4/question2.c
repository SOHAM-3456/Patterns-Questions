#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		if(i==1 || i==5)
		{
			for(j=1;j<=5;j++)
			{
				printf(" *");
			}
			printf("\n");
		}
		else
		{
			printf(" *");
			printf("       ");
			printf("*");
			printf("\n");
		}
	}
	
	return 0;
}