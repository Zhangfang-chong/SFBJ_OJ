//6-4juzhenzhuanzhi
#include<stdio.h>
int main()
{
	int arr1[2][3]={0};
	int arr2[3][2]={0};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d ",&arr1[i][j]);
		}
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			arr2[i][j]=arr1[j][i];
		}
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
