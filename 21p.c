#include<stdio.h>
int main()
{
	int N,A,sn,D;
	scanf("%d %d %d",&N,&A,&D);
          sn=((N*(2*A+((N-1)*D)))/2);
	printf("%d",sn);
	return 0;
	
	
}
