// use pointer to sum two 1d array 

#include<stdio.h>
main()
{
	int n;
	printf("Enter size for arrays = ");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	int sum;	
	
	printf("   sum of array  \n");
	for(i=0;i<n;i++)
	{
		int *ptr=&a[i];
		int *point=&b[i];
		printf("%d + %d = %d\n",*ptr,*point,*ptr+*point);
	}
	
	
}