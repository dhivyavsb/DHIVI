
#include<stdio.h>
    int main(void)
    {
    	int n,i,k;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    		if(n%i==0)
    		{
    		k++;
    	}
    }
    if(k!=2)
    printf("composite");
    else
    printf("not");
    return 0;
}
