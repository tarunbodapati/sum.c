#include<stdio.h>
int main()
{
	int a,n,reverse=0;
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
		
	}
	if(a==reverse)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
