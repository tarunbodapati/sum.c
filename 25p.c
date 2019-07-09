#include<stdio.h>
int main()
{
	int n,k=0,h,i,j;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0)
	{

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
		}
	}
	h=(a[(n/2)+1]+a[n/2])/2;
	printf("%d",h);
	}
	else
	{
		for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
		}
	}
	h=a[((n-1)/2)+1];
	printf("%d",h);
	}
	return 0;
}
	
