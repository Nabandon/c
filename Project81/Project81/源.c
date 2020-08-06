#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int size, int arr[], int tofind)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (right + left) / 2;
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
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(size, arr, 5);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
