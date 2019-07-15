#include<stdio.h>
int main()
{
	int n,d;
	scanf("%d %d",&n,&d);
	if((n%2==0)||(d%2==0))
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
