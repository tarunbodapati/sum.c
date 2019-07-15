#include<stdio.h>
#include<string.h>
int main()
{
	int a,i;
	char arr[11][11]={"zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
	scanf("%d",&a);
	for(i=a;i<=10;i++)
	{
		printf("%s",arr[i]);
		break;
	}
	return 0;
}
