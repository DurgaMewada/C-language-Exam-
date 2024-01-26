#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	puts("Enter word to reverse them");
	gets(str);
	
	int i,length=0;
	
	for(i=0;str[i]!=0;i++)
	{
		length++;
	}
//	printf("%d",length);

for(i=length;i>=0;i--)
{
	printf("%c",str[i]);
}
	
}