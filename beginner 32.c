#include <stdio.h>
int main 
{
	int c=0,i;
	char s[50];
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		c++;
	}
	printf("%d",c+1);
	return 0;
}
