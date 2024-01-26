#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet to check consonant or vowel = ");
	scanf("%c",&ch);
 

if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
{
	printf("vowel");
}
 else
 {
 	printf("consonant");
 }
}