#include<stdio.h>
#include<string.h>

struct input
{
    char user_name[50];
	int user_age,date,month,year;	
};

int info()
{
	int n;
	printf("Enter no. of stundent = ");
	scanf("%d",&n);
	struct input u[n];
	FILE *fp;
	fp=fopen("info.txt","w");
	int i;
	char name[50];
	
	for(i=0;i<n;i++)
	{
		printf("\n---------  Detail of user %d ---------  \n\n",i+1);
		
		printf("Enter your Name :");
		scanf(" %[^\n]s",name);
		strcpy(u[i].user_name,name);
		
		d:
	printf("      Brith date :");
	scanf("%d",&u[i].date);

	
	if(u[i].date>=1 && u[i].date<=31)
	{
	 //	printf("%d",date);	
	}
	else
	{
		printf("Enter valid date according to months ");
		goto d;
	}

	m:
	printf("      Brith month :");
	scanf("%d",&u[i].month);		
		
    	if(u[i].month>=1 && u[i].month<=12)
	   	{
//			printf("%d",month);
		}
		else
		{
			printf("Enter valid months between (1 to 12) ");
			goto m;
	    }
	    
	       
	    y:
		
		printf("      Enter year of brith : ");
		scanf("%d",&u[i].year);
		printf("    }\n");
		
		if(u[i].year>=1924 && u[i].year<=2024)
		{
			//printf("%d )",year);
			if(u[i].year>=1924)
			{
					if(u[i].month==1 || u[i].month==3 || u[i].month==5 || u[i].month==7 || u[i].month==8 || u[i].month==10 || u[i].month==12)
					{
						if(u[i].date>=1 && u[i].date <=31)
						{
							
						}
						else
						{
							goto d;
						}
					}
					else if(u[i].month==4 || u[i].month==6 || u[i].month==9 || u[i].month==11)
					{
						if(u[i].date>=1 && u[i].date<=30)
						{
							
						}
						else
						{
							goto d;
						}
					}
					if(u[i].month==2)
					{
						if(u[i].year%4==0)
						{
							printf("This is leap year \n");
						     if(u[i].date==30 || u[i].date==31)
						    {
							printf("      This month only have 29 days\n");
							goto d;
						    }	
						}
						else
						{
							if(u[i].date>=1 && u[i].date<=28)
							{
								
							}
							else
							{
								printf("Fed month have only 28 days \n");
								goto d;
							}
						}
						
					}
				
			}
		}
		else
		{
			printf("Enter right year");
			goto y;
		}
		
		 printf("\nBrith day : %d/%d/%d  \n",u[i].date,u[i].month,u[i].year);
		 
		 
		 u[i].user_age=2024-u[i].year;
		printf("Age : %d\n",u[i].user_age);
		 
		  
	}


			
	for(i=0;i<n;i++)
	{
		printf("\n          User infomation [%d]   \n",i+1);
		fprintf(fp," \n       User infomation [%d]   \n",i+1);
		
		printf("       Name : %s \n",u[i].user_name);
		fprintf(fp,"   Name : %s\n",u[i].user_name);
	
		printf("    Brithday : %d/%d/%d \n",u[i].date,u[i].month,u[i].year);
		fprintf(fp,"     Brithday : %d/%d/%d \n",u[i].date,u[i].month,u[i].year);
		
		
		u[i].user_age=2024-u[i].year;
		printf("       Age : %d\n",u[i].user_age);
		fprintf(fp,"       Age : %d\n",u[i].user_age);
		
		printf("\n");
	}
}
void main()
{
	
	info();
	
}