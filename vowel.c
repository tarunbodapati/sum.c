#include<stdio.h>
int main()
{
     char A;
     scanf("%c",&A);
     if((A>='a')&&(A<='z'))
     {
     	if(A=='a'||'e'||'i'||'o'||'u')
     	{
     	    printf("Vowel");	
		}
		else
		{
			printf("Consonant");
		}
   	}
	 else
	 {
	 	 printf("invalid");	
	 } 
	 return 0;
	 
}
