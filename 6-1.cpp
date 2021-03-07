//6-1逆序输出数组元素 
#include<stdio.h>
int main()
{
	int arr[10]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[9-i]);
	}
	
	return 0;
} 
