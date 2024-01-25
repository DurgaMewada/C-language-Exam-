#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	int space;
	
	for(i=5;i>=1;i--)
	{
		for(space=i;space<5;space++)
		{
			printf(" ");
		}
		for(j=i+5;j>=6;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}