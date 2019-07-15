#include<stdio.h>
int main()
{
	int d,c,i,a[10],j,count=0,x,z=0;
	scanf("%d",&d);
	x=d;
	
	while(x!=0)
	{
		x=x/10;
		count++;

	}
	while(d!=0)
	{
		c=d%10;
		
		for(i=z;i<count;i++)
		{
			a[i]=c;
			c=0;
			break;
		}
		
		z++;
		 d=d/10;
	}
for(i=count-1;i>=0;i--)
{
printf("%d ",a[i]);
}
return 0;
}
