#include<stdio.h>
int main()
{
	int k,i,j,temp=0;
	int a[k];
	scanf("%d",&k);
	for( i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
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
	for(i=0;i<k;i++)
	{
	printf("%d\t",a[i]);
}
	return 0;
}
