// divisiable by 3 and 5

#include<stdio.h>
main()
{
	int num;
	printf("Enter number to check number is divisiable by 3 and 5 = ");
	scanf("%d",&num);
	
	printf("\n");
	if(num%3==0 && num%5==0)
	{
		printf("   Number is divisiable by 3 and 5  ");
	}
	else
	{
		if(num%3==0)
		{
			printf("   Number is only divisiable by 3  :) ");
		}
		else if(num%5==0)
		{
			printf("   Number is only divisiable by 5");
		}
		else
		{
			printf("   Number is not divisiable by 3 and 5  :(  ");
		}
	}
}