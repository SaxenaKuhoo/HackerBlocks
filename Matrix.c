#include<stdio.h>
int main(void) {
	int n;
	int a[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int k=n-1;
	for(int i=0;i<n;i++)
	{	int l=0;
		for(int j=0;j<n;j++)
		{	
			printf("%d ",a[l][k]);
			l++;
		}
		k--;
		printf("\n");
	}
	return 0;
}
