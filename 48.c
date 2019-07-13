#include<stdio.h>
int main()
{
	int i,a,y,x=0;
	scanf("%d",&a);
	int n[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
		
	}
	
	for(i=0;i<a;i++)
	{
		x=n[i]+x;
	}
	y=x/a;
	printf("%d",y);
	return 0;
}
