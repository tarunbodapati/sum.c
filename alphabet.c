#include<stdio.h>
int main()
{
	char A;
	scanf("%c",&A);
	if(((A>='a')&&(A<='z'))||((A>='A')&&(A<='Z')))
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
	return 0;
}
