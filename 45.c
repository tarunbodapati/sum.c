#include<stdio.h>
int main()
{
	int a,i,count=0;;
	scanf("%d",&a);
	for(i=1;a!=0;i++)
	{
		a=a/10;
		count++;
		
	}
	printf("%d",count);
	return 0;
}
