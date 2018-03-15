#include<stdio.h>
int main()
{
	int g,c,i,d;
	scanf("%d%d",&g,&c);
	for(i=1;i<=g&&i<=c;i++)
	{
		if(g%i==0&&c%i==0)
		d=i;
	}
	printf("%d",d);
	return 0;
}
