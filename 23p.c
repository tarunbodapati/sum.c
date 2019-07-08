#include<stdio.h>
int main()
{
	int N,i,j,temp=0;
	int a[N];
	scanf("%d",&N);
	for( i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<N-1;i++)
	{
		for(j=1;j<N;j++)
		{
			if(a[i]<a[j])
			{
			    temp=a[i];  
			 	a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	printf("%d",a[N-1]);
	return 0;
}
