#include<stdio.h>
int main()
{
	int d,c,i=3,a[10],j=2;
	scanf("%d",&d);
	while(d!=0)
	{
		c=d%10;
		j=i-1;
		for(i=j;i>=0;i--)
		{
			a[i]=c;
			c=0;
			break;
		}
		d=d/10;
	}
for(i=0;i<=2;i++)
{
printf("%d ",a[i]);
}
return 0;
}
