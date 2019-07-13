#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],a[100];
	int x=0,count=0,i,j;
     scanf("%s %s",&c,&a);
	for(i=0;c[i]!='\0';i++)
	{
		count++;
	}
	for(j=0;a[j]!='\0';j++)
	{
		x++;
	}
	if(count>=x)
	{
		puts(c);
	}
	else
	{
		puts(a);
	}
	return 0;
}
