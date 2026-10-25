#include<stdio.h>
#include<stdlib.h>
int main()
{
  void *p; 
  int c=0;
  while(p=malloc(100*1024*1024))
  {
	c++;
  }
  printf("%d00MB",c);
  return 0;
  
}
