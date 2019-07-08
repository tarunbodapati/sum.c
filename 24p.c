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
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{
			    temp=a[i];  
			 	a[i]=a[j];
				a[j]=temp;
			}
			temp=0;
		}
		
	}
	for(i=0;i<N;i++)
	{
	printf("%d\t",a[i]);
}
	return 0;
}
