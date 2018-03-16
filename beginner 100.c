#include <stdio.h>
int main() 
{
	int m,l,n,pro=1;
	scanf("%d",&m);
	l=m;
	while(l!=0)
	{
		n=l%10;
		pro=pro*n;
		l=l/10;
	}
	printf("%d",pro);
	return 0;
}
