#include <stdio.h>
int main()
{
	int n[32]={0};
	int i,num ;
    while(1)
    {
     printf("输入数字\n");	
     scanf("%d",&num);
	 if(num==67)
	 {
	 	break;
	 }
     else
     {
	   for(i=0;i<32;i++)
      {
      	n[i]=0; 
	  }  
	  //每次清零，不然上一次的会遗留   	
	   for(i=0;i<32;i++)
	  {
		n[31-i]=num&1;
		num=num>>1;
		if(num==0)  break;
	  }  
	  //算二进制 
	printf("2进制=");  
	for(i=0;i<32;i++) 
	 {
      printf("%d",n[i]);   
	  }
	  //打印二进制结果 
    }
	printf("\n"); 
    }
	
	return 0;
}
