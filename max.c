#include<stdio.h>
int main()
{
	int a[100],n,x,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;	
			}
		}
	}
	printf("%d",a[0]);
	return 0;
	
}
