#include<stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	for(i=1;i<=100;i++)
	{
    if(a==2*i)
	{
		printf("yes");
		goto x;
	}
	
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
