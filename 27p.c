#include<stdio.h>
#include<string.h>
int main()
{
	int i,a=0,d=0;
	char s[100];
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
    	
    	if(isdigit(s[i])!=0)
    	{
    		a=a+1;
		}
		else if(s[i]=='.')
		    d=d+1;
	}
	if(strlen(s)==(c+d))
	    printf("Yes");
	else     
	     printf("No");
	return 0;
}
