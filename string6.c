#include<stdio.h>
int main()
{
  char a[100];
  int i;
  int count=0,x,se=0;
  gets(a);
   for(i=0;a[i]!='\0';i++)
    {
    }

    for(i=0;a[i]!='\0';i++)
    {
       if(isdigit(a[i])!=0)
	       count++;
	   }
	     for(i=0;a[i]!='\0';i++)
    {
       if(isalpha(a[i])!=0)
	       se++;
	   }

              

x=i-count-se;
 
 printf("%d",x);
	return 0;
	
}
