#include<stdio.h>
int main()
{
	int n,i;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	scanf("%d\t",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\n",a[i],i);
	}
	return 0;
}
