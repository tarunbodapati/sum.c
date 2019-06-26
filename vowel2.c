#include<stdio.h>
int main()
{
     char A;
     scanf("%c",&A);
     if((A>='a')&&(A<='z'))
     {
     	if((A=='a')||(A=='e')||(A=='i')||(A=='o')||(A=='u'))
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
