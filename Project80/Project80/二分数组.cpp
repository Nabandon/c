#include <stdio.h>
#include <stdlib.h>
int bs(int size,int arr[], int tofind)
{
	
	int left = 0;
	int right = size-1;
	while (left <= right)
	{
		
		int mid = (left + right) / 2;
		if (arr[mid] < tofind)
		{
			left = mid + 1;
		}
		else if (arr[mid]>tofind)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret=bs(size,arr,6);
	printf("%d\n", ret);
	system("pause");
	
}