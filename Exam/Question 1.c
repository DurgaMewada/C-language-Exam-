// sum of first and last digit 

#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	
 		printf("Enter (3 digit's positive interger) number ");
	    scanf("%d",&num);	

	int firstdigit;
	int lastdigit=num%10;
	
	int i;
	while(num!=0)
	{
		firstdigit=num;
		num=num/10;
	}
	
	printf("%d + %d = %d",firstdigit,lastdigit,firstdigit+lastdigit);
}