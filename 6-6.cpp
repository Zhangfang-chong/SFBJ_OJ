//6-6Ñî»ÔÈı½Ç
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(y==0||y==x)
				a[x][y]=1;
			else a[x][y]=a[x-1][y-1]+a[x-1][y];
		}
	}		
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(x>=y)
			printf("%d ",a[x][y]);
		}
		printf("\n");
	}	
	return 0;
} 

