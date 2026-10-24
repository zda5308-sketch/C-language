#include<stdio.h>
int main()
{
	int a;
	long long result=1;
	scanf("%d",&a);
	if(a<0)
	{
		printf("傻逼，负数没有阶乘");
	}
	else
	{
		for (int i=1;i<=a;i++)
		{
			result=result*i;
		}
		printf("%d!=%lld\n",a,result);}

}
	

