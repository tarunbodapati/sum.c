#include<stdio.h>
int main()
{
	int a,i,j,count=0,n;
	scanf("%d\t %d",&a,&n);
	i=a;
   for(i=i+1;i<n;i++)
   {
   	for(j=1;j<n;j++)
   	{
   		if(i%j==0)
   		{
   			count++;
  
   			
   	    }
   	}
   		if(count==2)
   			{
   			printf("%d\t",i);
		   }
		   count=0;
	   
   }
   			
   			
	   
   


	return 0;
}
