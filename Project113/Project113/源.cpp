#include <stdio.h>
#include <stdlib.h>
int n;
int *x;
int sum = 0;
int place(int k)
{
	for (int j = 1; j < k;j++)
	if (x[j] == x[k]) return 0;
	return 1;
}
void swap(int &i, int &j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;

}void backtrack(int *x, int t)
{
	if (t >= n)
	{
		sum++;
		for (int i = 1; i <= n; i++)
			printf("%d", x[i]);
		printf("\n");
	}
else
{
	for (int i = t; i <= n; i++)
	{
		swap(x[t], x[i]);
		if (place(t)) backtrack(x, t + 1);
		swap(x[t], x[i]);
	}
}
}void main(){
	n = 4;
	x = new int[n + 1];
	for (int i = 1; i <= n; i++)
		scanf("%d", &x[i]);
	backtrack(x, 1);
	printf("ÅÅÁÐÖÖÊý:%d\n", sum);
	system("pause");
}