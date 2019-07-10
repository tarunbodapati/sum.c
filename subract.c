#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	a=a-c;
	b=b-d;
	printf("%u %u",a,b);
  
	return 0;
	
}
