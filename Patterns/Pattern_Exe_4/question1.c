#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		if(i!=4){
			printf("      ");
		}
		
		if(i==4)
		{
			for(j=1;j<=7;j++)
			{
				printf("* ");
			}
			printf("\n");
			
		}
		else
		{
			printf("*\n");
	
		}
	}
	
	return 0;
}