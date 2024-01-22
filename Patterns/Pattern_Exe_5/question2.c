#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		if(i<5 || i==7)
		{
			printf("\t*");
		}
		else
		{
			printf("\t ");
		}
		
		for(j=1;j<=3;j++)
		{
			if(i==4 || i==7)
			{
				printf("\t*");
			}
			else 
			{
				printf("\t");
			}
		}
		if(i==4)
		{
			for(j=1;j<=3;j++)
			{
				printf("\t*");
			}
		}
		else 
		{
		    if(i!=7) 
			{
				printf("*");
			}
		}
		if(i>=5)
		{
			for(k=1;k<=3;k++)
			{
				printf("\t");
			}
			printf("*");
		}
		
		
		
		if(i==1)
		{
			for(k=1;k<=3;k++)
			{
				printf("\t*");
			}
			printf("\n\n");
		}
		else 
		{
			printf("\n\n");
		}
		
	}
	
	return 0;
}