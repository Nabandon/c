#include <stdio.h>
#include <stdlib.h>
int Binrayseacher(int size, int arr[], int tofind)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left+right)/2;
		if (arr[mid] < tofind)
		{
			left = mid + 1;
		}
		else if (arr[mid]>tofind)
		{
			right = mid - 1;
		}
		else { return mid;
		}
	}
}
int main()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = Binrayseacher(size, arr, 5);
		printf("ret=%d\n",ret);
		system("pause");		
}
