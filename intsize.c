#include<stdio.h>
int main()
{
   int i;
   scanf("%d",&i);
   if((i>=0)&&(i<10))
   {
   	printf("1");
   }
   else if((i>=100)&&(i<=999))
   {
   	printf("3");
   }
   else if((i>10)&&(i<=99))
   {
   	printf("2");
   }
   else
   printf("4");
   return 0;
}
