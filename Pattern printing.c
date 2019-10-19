// pyramid
#include<stdio.h>
main()
{
	int a;
	int i,j,k,n;
	while(1)
	{
	printf("\nSelect which pattern to display");
	printf("\n1.Square \n2.Forward slant line \n3.Backward slant line \n4.Forward triangle \n5.Backward triangle \n6.Pyramid  ");
	  scanf("%d",&a);
	printf("Enter number of rows & columns  ");
	  scanf("%d",&n);
	switch(a)
	{
		case 1: 
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					printf(" * ");
				}
			printf("\n");
			}
			break;
		case 2:
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(i==j)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;
		case 3:
			for(i=0;i<n;i++)
			{
				for(j=0;j<=n;j++)
				{
					if((i+j)==n/2)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;	
			
		case 4:
			for(i=0;i<=n;i++)
			{
				for(j=0;j<=n;j++)
				{
					if(i>=j)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;
		case 5:
			for(i=0;i<=n;i++)
			{
				for(j=0;j<=n;j++)
				{
					if((i+j)>=n)
						printf(" * ");
					else
						printf("   ");
			    }
			printf("\n");
			}
			break;
		case 6:
			for(i=1;i<=n;++i,k=0)
    		{
        		for(j=1;j<=n-i;++j)
        		{
            		printf("  ");
        		}
        	while(k!=2*i-1)
        	{
            	printf("* ");
            	++k;
        	}
        	printf("\n");
    		}
			break;
	}
	}
}

