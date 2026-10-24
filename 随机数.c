#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int arr[10]={0};
	srand((unsigned)time(NULL)); 
	int count=0,i,num,f=0;
	while(count<10)
	{
		num=0;
		num=rand()%1000+1;
		for(i=0;i<count;i++)   //
		{
		  if(num==arr[i])
		  {
		  	f=1;break;
		  }
	    }                      //整个for都是在判断随机数是否重复 
		if(!f)
		{
			arr[count]=num;
			count++;
		}
	}
	printf("arr[10]:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
