// reverse string

#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	printf("Enter input to reverse it's output = ");
	gets(str);
	
	int i,len=0;
	
	for(i=0;str[i]!=0;i++)
	{
		len++;
	}
	printf("Length of string is = %d",len);
	
	printf("\n    Reverse output   \n");
	
	for(i=len;i>=0;i--)
	{
		printf("      %c    ",str[i]);
	}
}