#include<stdio.h>
int main()
{
	int n;
	int sc[100];
	int i ;
	int sum=0,max=0,min=100;  // min 初始值代表测试满分值 
	float ar; 
	
	printf("输入人数\n");
	scanf("%d",  &n);
	
	
	for(i=0;i<n;i++)
	{
		printf("第%d人成绩\n" ,i+1);
		scanf("%d",&sc[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sc[i]>max)
		{
			max=sc[i];
		}
	    if(sc[i]<min)
		{
		    min=sc[i];
		}
		ar+=sc[i] ;
		
		
	}
	
	ar/=n;
	printf("最高分=%d,最低分=%d\n平均分=%f",max,min,ar);
	
	
	
	return 0;
 } 

