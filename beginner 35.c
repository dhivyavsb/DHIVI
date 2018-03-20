#include <stdio.h>
int main()
{
	char s[50];
	int i,a=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			a++;
		}
	}
	printf("%d",a);
	return 0;
}
