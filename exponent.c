#include<stdio.h>
int main()
{
	int a,n,i,count=1;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
	    count=a*count;	
	}
	printf("%d",count);
	return 0;
	
	
}
