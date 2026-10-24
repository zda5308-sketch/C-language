#include<stdio.h>
#include<string.h>
int main()
{
  char msg[1000],key[1000];
  int i,len,keylen,choice;

  while(1)
  {
  	printf("输入待加密字符\n");
	scanf("%999s",msg); 
  	
  	if (strcmp(msg, "`") == 0)
  	{break;}
  	
  	printf("输入密钥\n");
  	scanf("%999s",key);
  	
  	printf("选择操作: 1-加密 2-解密: \n");
  	scanf("%d", &choice);
  	
  	len=strlen(msg); keylen=strlen(key);
  	
  	if(choice==1||choice==2)
  	{
  	   for(i=0;i<len;i++)
		 {
		   msg[i]=msg[i]^key[i%keylen];	//key[]专门取余是为确保(1)key长度<msg[]  因为 len=strien(msg)且 i<=len  当 i >= keyLen 时，就会访问 key 数组外面，属于越界访问。
                                        //                     (2)明文有多长，密钥就能跟着“重复”多长，保证每个字符都有密钥可用。即i % keyLen 会让下标在 0 ~ keyLen - 1 之间循环。		   
		 }	
  		if(choice==1)
		 {
		 	printf("加密结果为：%s\n\n",msg);
		 }  
  		else
  		 {
  		 	printf("解谜结果为：%s\n\n",msg);
		 }
  	
	  }
  	else
  	{
  		printf("无效操作\n");
	}
  	
  }
  
	return 0;
 } 
