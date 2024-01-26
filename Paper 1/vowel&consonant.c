//vowel or consonant

#include<stdio.h>
#include<string.h>
main()
{
	char ch;
	printf("Enter Alphabet to check : ");
	scanf("%c",&ch);
	
	
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')
	{ 
	    if( ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	    {
	    	printf("This alphabet is vowel");
	    }
	    else
	    {
	    	printf("This alphabet is consonant");
		}
    }
	else
	{
		printf("Enter only alphabet ");
	}
}