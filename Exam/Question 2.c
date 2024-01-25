#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	puts("Enter any sentence  :");
	gets(a);
	
	int frequency=1;
	int i,j;
	int length =strlen(a);
	for(i=0; i<length; i++)
	{
		   for(j=i+1; j<length; j++)
		   {
			   if(a[i] == a[j])
			   {
			   	    frequency++;
				   a[j]=-1;
			   }
		   }
		   if(a[i]!=-1)
		   {
		   	    printf(" %c -> %d\n",a[i],frequency);
		   }
		   frequency=1;
    }
}