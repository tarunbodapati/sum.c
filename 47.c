#include<stdio.h>
int main()
{
	int n,i,j,x;
	scanf("%d",&n);
    int a[n];
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	printf("%d %d",a[0],a[n-1]);
	return 0;
}
