#include<stdio.h>
int main()
{
	int a,i,c=1;
	scanf("%d",&a);

	for(i=a;i>=1;i--)
	{
		c=i*c;
	}
	printf("%d",c);
	return 0;
}
