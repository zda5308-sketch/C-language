#include<stdio.h>
void swap(int*x,int*y)  //指针交换变量，先定义指针函数，之后在main中调用 
{
	int t;
	t=*x;
	*x=*y;
	*y=t;   //交换变量 
}

int main()
{
	int a,b;
	printf("请输入两变量值：\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("交换后：\n");
	printf("%d %d",a,b);
	return 0;
 }
