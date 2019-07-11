#include<stdio.h>
int main()
{
  char a[100];
  int i;
  int count=0,x;
  gets(a);
  
 for(i=0;a[i]!='\0';i++)
  {
  
  	if((a[i]>='a')&&(a[i]<='z'))
  	{   
     	
  }

}
    for(i=0;a[i];i++)
    {
       if(a[i] == ' ')
	       count++;
	   }
              
x=i-count;

 
 printf("%d",x);
	return 0;
	
}
