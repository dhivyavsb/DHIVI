#include<stdio.h>
int main()
{
	char a[32],d=0,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
	if(a[i]==' ')
	d++;
	}
	printf("%d",d);
	return 0;
}
