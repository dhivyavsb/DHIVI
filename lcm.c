#include<stdio.h>
int main()
{
int m,l,n;
scanf("%d%d",&m,&l);
n=(m>l)?m:l;
while(1)
{
if(n%m==0&&n%l==0)
{
printf("%d",n);
break;
}
++n;
}
return 0;
}
