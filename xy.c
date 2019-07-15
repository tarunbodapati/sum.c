#include<stdio.h>
int main()
{
	int i=2,a;
	scanf("%d",&a);
	while(i==2)
	{
		if(a==1)
		{
			printf("yes");
			goto x;
		}
   else if(a==2*i)
	{
		printf("yes");
		goto x;
	}
	i=i+2;
	
}

		for(i=1;i<=100;i++)
		
	{
		if(a!=2*i)
		{
		printf("no");
		break;
}
	}
	

	

	x:

	return 0;
}
