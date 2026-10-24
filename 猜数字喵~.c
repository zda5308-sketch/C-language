#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int a,b;
	int c=0;
	
	srand(time(NULL)) ;
	b=rand()%100+1;
	
	printf("0到100猜数喵~你有10次机会~\n");
	
	for(c=1;c<=10;c++) 
  {
  
	scanf("%d",  &a);
	if(a==b)
	{
		printf("猜对了喵~\n") ;
		return 0;
	}
	else
	{
		if(a>b) 
		{
			printf ("猜大了喵~第%d次\n" , c);
		}
		else
		{
			printf("猜小了喵~第%d次\n" ,c);
		}
	 } 
	 
	 
	 
  }
  printf("结束了喵~杂鱼~\n"); 
  return 0; 
}
