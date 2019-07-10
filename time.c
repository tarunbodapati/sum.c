#include<stdio.h>
int main()
{
	int a,x,y;
	scanf("%d",&a);
    if(a<60)
    {
       printf("0 %d",a);
	}
	else
	{
		x=(a/60);
		y=(a%60);
		printf("%d %d",x,y);
		
	}
	return 0;
	
}
