#include <stdio.h>

int main() {
    
    int i,j,k;
     for(i=1;i<=7;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf("  ");
         }
         for(k=1;k<=8-i;k++)
         {
             printf("  * ");
         }
         printf("\n");
     }
	 
     for(i=1;i<=6;i++)
     {
         for(j=1;j<=7-i;j++)
         {
             printf("  ");
         }
         for(k=1;k<=1+i;k++)
         {
             printf("  * ");
         }
         printf("\n");
     }

return 0;
}