//square using pointer

#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array = ");
	scanf("%d",&n);
	
	int a[n];
	int i,square;
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

    printf("Square of element   \n");
    
    for(i=0;i<n;i++)
    {
    	int *pointer=&a[i];
    	square=*pointer* *pointer;
    	printf("  Square of element (%d) = %d\n",a[i],square);
	}
}