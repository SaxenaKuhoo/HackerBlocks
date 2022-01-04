/*Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  **/








#include<iostream>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=n/2)
			{
				if(i==0)
				{
					if(j==0)
					printf("*");
					if(j<n/2 && j!=0)
					printf(" ");
					if(j>=n/2 && j<n)
					printf("*");
				}
				else if(i<n/2)
				{
				if(j==0)
				printf("*");
				else if(j<n/2 && j!=0)
				printf(" ");
				else if(j==n/2)
				printf("*");
				}

			if(i==n/2)
				printf("*");
			}
			if(i>n/2)
			{
				if(i==(n-1))
				{
					if(j<=n/2)
					printf("*");
					else if(j>n/2 && j<(n-1))
					printf(" ");
					else if(j==(n-1))
					printf("*");
				}
				else 
				{
					if(j<n/2)
					printf(" ");
					else if(j==n/2)
					printf("*");
					else if(j>n/2 && j<(n-1))
					printf(" ");
					else if(j==(n-1))
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
