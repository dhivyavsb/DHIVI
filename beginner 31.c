#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int w=0,i;
	printf("Enter the String:");
	scanf("%c",&s[i]);
	for(i=1;s[i]!=0;i++)
	{
		if(s[i]=='i')
		{
			w++;
		}
		printf("%c",w+1);
	}
	return 0;
}
