#include<stdio.h>
int main()
{
   int a,b,i,c,d,e=0,h;
   scanf("%d \t %d",&a,&b);
   i=a;
   for(i=i+1;i<b;i++)
   {
   	h=i;
   	while(h!=0)
   	{
   	
   		c=h%10;
   		h=h/10;
   		d=c*c*c;
   		e=e+d;
	   }

	   if(e==i)
	   {
	   	printf("%d \t",i);
	   	
	   }
	   e=0;
}
	   
 
   return 0;
}
