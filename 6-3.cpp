//6-3ц╟ещеепР
#include<stdio.h>
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d ",&arr[i]);
	}
	int flag=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if(arr[j]>arr[j+1])
		 { 
			int temp=0;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		 }
		}

	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
 } 
