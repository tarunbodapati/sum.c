#include<stdio.h>
int main()
{
	int a,i,count=0;
	scanf("%d",&a);
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		{
			count ++;  
	    }
	}
	if(count==1)
			{
				printf("yes");
			}
			
			else
			{
				printf("no");
		}
	
		
		
	
	return 0;
}
