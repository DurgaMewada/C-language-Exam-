//largest element

#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array = ");
	scanf("%d",&n);
	
	int a[n];
	int i,largest=0;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	   if(a[i]>largest)
	   {
	   	largest=a[i];
	   }
	}
	
	printf("\n    The largest element is above given is %d",largest);
}