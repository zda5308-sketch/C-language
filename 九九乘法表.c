#include<stdio.h>
int main()
{
	int i,j;
	printf("¾Å¾Å³Ë·¨±í£º\n");
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
		   int sum=0;
		   sum=i*j;
		   printf("%d*%d=%-4d ",i,j,sum);
			
		}
		printf("\n"); 
	}
   return 0;	
}
