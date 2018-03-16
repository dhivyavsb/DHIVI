#include<stdio.h>
int main()
{
	int d,i;
	scanf("%d",&d);
	for(i=1;i<=d;i++)
	{
		if(d%2==0)
		if(i%2==0)
		printf("%d\t",i);
	}
	return 0;
}
