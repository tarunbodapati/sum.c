#include<stdio.h>
int main()
{
	int N,k,count=0,i;
	int a[N];
	scanf("%d %d",&N,&k);
	for(i=0;i<=N-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=k-1;i++)
	{
		count=count+a[i];
	}
	printf("%d",count);
	return 0;
}
