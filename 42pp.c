#include<stdio.h>
#include<string.h>
int main()
{
	char d[100],a[100];
	int x=0,count=0,i,j;
     scanf("%s %s",&d,&a);
	for(i=0;d[i]!='\0';i++)
	{
		count++;
	}
	for(j=0;a[j]!='\0';j++)
	{
		x++;
	}
	if(count>x)
	{
		puts(d);
	}
	else
	{
		puts(a);
	}
	return 0;
}
