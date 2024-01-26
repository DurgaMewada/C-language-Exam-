//struct of car

#include<stdio.h>
#include<string.h>

struct car
{
	char model[50];
	int year,price;
	
};
main()
{
	int n;
	printf("list of number of car : ");
	scanf("%d",&n);
	
	char model_name[50];
	
     struct car c[n];
	 	int i,j=1;
	 	for(i=0;i<n;i++)
	 	{
	 		printf("\n    Detail of %d car\n",j);
	 		printf("Enter model of car : ");
	 		scanf(" %[^\n]s",&model_name);
	 		strcpy(c[i].model,model_name);
	 		
	 		printf("Enter year of car : ");
	 		scanf("%d",&c[i].year);
	 		
	 		printf("Enter price of car :");
	 		scanf("%d",&c[i].price);
	 		
	 	j++;
		 printf("\n");	
		}
		j=1;
		for(i=0;i<n;i++)
		{
			printf("       Car %d    \n",j);
			printf("Model name = %s\n",c[i].model);
			printf("Model year = %d\n",c[i].year);
			printf("Model price = %d\n",c[i].price);
			
		}
}