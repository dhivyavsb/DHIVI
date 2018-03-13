#include<stdio.h>
int main()
{
	int m1,t,m2;
	scanf("%d",&m1);
	t=m1/60;
	m2=m1%60;
	printf(" The Hour is %d\t",t);
	if(m1%60==0)
	{
		printf("The mintue is 0");
	}
	else
	{
		printf("The mintue is %d",m2);
	}
	return 0;
}
