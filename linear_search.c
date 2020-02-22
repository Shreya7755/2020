#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	float arr[n];
	printf("enter the integer to check in array\n");
	scanf("%d",&k);
	printf("enter the elements of an array\n"); 
	for (int i = 0; i < n; ++i)
	{
		scanf("%f",&arr[i]);
	}
	int found=0;
	int num;
	for (int i = 0; i < n; ++i)
	{
		if (k==arr[i])
		{
			found=1;
			num = i;
			break;
		}
		else		
			found=0;
	}
	if(found)
	{
		printf("The number is found at index %d\n",num);
	}
	else
	{
		printf("The number is not found\n");
	}
}