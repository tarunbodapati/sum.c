#include<stdio.h>
int main()
{
	int a,d,e,f,i,g,c;
	scanf("%d",&a);
	f=a;
	for(i=1;i<=3;i++)
	{
	if(f!=0)
	{    g=f/10;
		c=f%10;
		e=c*c*c;
		f=g;
		
	}
	d=d+e;
}
if(d==a)
{
	printf("yes");
	
}
else
{
	printf("no");
}
return 0;

}
