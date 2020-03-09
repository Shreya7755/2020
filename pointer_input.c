#include<stdio.h>
int main()
{
	int arr[4];
	int *var=arr;
	printf("Enter the value of array \n");
	for (int i = 0; i <= 3; ++i)
	{
		scanf("%d",var+i);
	}
	for (int i = 0; i <= 3; ++i)
	{
		printf("%d\t",*var+i);
	}	
}
