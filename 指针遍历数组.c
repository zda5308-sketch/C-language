#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sr(int Arr[])
{
	srand((unsigned)time(NULL));  
	int count=0,num,i,f;
	while(count<10)
	{
		f=0;
		num=rand()%100+1;
		for(i=0;i<count;i++)
		{
			if(Arr[i]==num)
			{
				f=1; break;
			}
		}
			if(!f)  //f==0
			{
				Arr[count]=num;
				count++;
			}	
		
	}
}
//先写了一个生成含有10个随机int的数组函数 

//指针遍历数组 
int main()
{
	int arr[10]={0};
	int*p;
	printf("遍历结果为：\n");
	sr(arr);
	for(p=arr;p<arr+10;p++)
	{
		printf("%d ",*p);
	}
    printf("\n");
    
    return 0;

	
 } 
