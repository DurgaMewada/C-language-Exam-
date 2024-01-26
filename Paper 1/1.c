#include<stdio.h>
main()
{
	char alpha;
	printf("Enter any alphabet to check consonant or vowel");
	scanf("%c",&alpha);
	
	if( alpha ='a' || alpha ='e' || alpha ='i' || alpha ='o' || alpha = 'u')
	{
		printf("This alphabet is vowel ");
	}
	else if(alpha='A' || alpha='E' || alpha='I' || alpha='O' || alpha= 'U')
	{
		printf("This alphabet is vowel ");
	}
	else
	{
		printf("This alphabet is consonant");
	}
}