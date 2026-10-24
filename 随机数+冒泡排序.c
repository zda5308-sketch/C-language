#include<stdio.h>
#include<stdlib.h>  //引入 srand rand
#include<time.h>
int main()
{ 
 srand((unsigned)time(NULL));  // 用当前时间做种子
 int arr[10]={0};
 int i,count=0,num;
 printf("生成随机数：\n"); 
 while(count<10)
 {
    num=rand()%90+10;  //随机数取90的余，确保其在0-89，+10使其在10-99（即生成两位数随机数） 
    int found=0;  //found:检查随机数是否已经存在
    for(i=0;i<count;i++)  //
    {
      if(arr[i]==num)      //    这个for中i-1=count，能让上一 个arr[count]与现循环中的num比较 ，实现检查随机数是否已经存在 
	                       //    注：count第一次为0，i也为0，所以第一次for循环直接跳过，为arr[0]赋值，而下一次while中：count=1，i=0，开始循环 
      {
      	found=1;
      	break;             //
	  }
    }
	  if(!found)  //即found==0 
	  {
	  	arr[count]=num;
	  	count++;
	  }
	  
	//!!!  printf("%d ",arr[count]); 不能加这！打印要再写一个循环 
	
 }
   for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]); //不用arr[count]  因为count=10了，越界了，while中arr[]0-9存完了，用for打印就行了 
    }
    printf("\n");
    
    //下面开始冒泡排序（从小到大） 
    int t,j, start;
    printf("按“0 ”开始排序\n");
	scanf("%d",&start); 
	 if(start==0)
	 {
	 	for(i=0;i<count-1;i++)  //外层循环轮数 count=10 所以i：0-9 注：排序只要10-1=9轮 ，所以i<9 
		 {
		 	for(j=0;j<count-1-i;j++)  //内层循环每轮和领位比，第0轮一定能把max排序到最后，以此类推，内层循环至多要9+8+7+6+5+4+3+2+1=45次 
			 {
			 	if(arr[j]>arr[j+1]) //arr[j]>arr[j+1] 从小到大，反之 
			 	{
			 	 t = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = t;   //交换变量 
				}
			 } 
		 	
	     }
	 	
	 }
	
	printf("排序后结果：\n");
	 for (i = 0; i < 10; i++)   //与上一个for打印一致 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
	
	

	return 0;
}
