# include<stdio.h>
int main()
{
int i,j,p,n=0,q;
scanf("%d %d",&p,&q);
for(i=p;i<=q;i++)
{
	n=0;
for(j=1;j<=q;j++)
{
if(i%j==0)
n++;
}
if(n==2)
printf("%d",i);
}
return 0;
}
