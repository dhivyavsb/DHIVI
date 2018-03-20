#include <stdio.h>
int main()
{
int s=0,a,d;
float n;
scanf("%f%d%d",&n,&a,&d);
s=(n/2)*(2*a+(n-1)*d);
printf("%d\n",s);
return 0;
}
