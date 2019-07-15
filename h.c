#include<stdio.h>
int main()
{
	int a,count=0,j=0,i,d,c,h[100],n;
	scanf("%d",&a);
	d=a;
	while(d!=0)
	{
		d=d/10;
		count++;
	}
	while(a!=0)
	{
		c=a%10;
		j=j+1;
		
	for(i=j;i<=count;i++)
	{
	    n=c+n;
		break;
		
	}
	a=a/10;
}

printf("%d",n);
return 0;
}
