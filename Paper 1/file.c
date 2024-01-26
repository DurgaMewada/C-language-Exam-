// file handiling of stundent 

#include<stdio.h>
#include<string.h>
main()
{
	FILE *s;
	s=fopen("data.txt","w");
	
	char name[3],course[3];
	
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter stundent name : ");
		scanf(" %[^\n]s",name);
		 
		printf("Enter course of stundent ");
		scanf(" %[^\n]s",course);
		
		printf("Detail of stundent \n");
		fprintf(s,"Detail of stundent \n");
		
		printf("%s",name);
		fprintf(s," %s",name);
		
		printf("%s",course);
		fprintf(s," %s",course);
		
		printf("\n");
		fprintf(s,"\n");

		
	}
	
	
}