#include<stdio.h>
int main()
{
	long long start,end;
	long long i,j,sum;
	while(1)
	{
		printf("请输入数字范围\n");
		scanf("%lld %lld",&start,&end);
		if(start==0&&end==0){ printf("结束\n");  break; }
		printf("完美数有:\n");
		for(i=start;i<=end;i++)
		{
			sum=0;
			for(j=1;j<=i/2;j++)
			{
				if(i%j==0)
				{
				  sum+=j;
				}
			}
			if(i>1&&i==sum)
			{ 
			printf("%lld\n",i);
			}
			
		}
		
	 } 
	
	return 0;
}
