#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
int main()
{
	int x, num, pResult, i = 1, result = 0;
	cout << "INPUT A NUMBER:\n";
	cin >> x;
	num = x / 2 + 2;
	int sum = 0;
	for (int n = i; n <= num;)
	{
		pResult = x - sum;
		if (pResult > 0)sum += n++;
		if (pResult < 0)sum += i--;
		if (pResult == 0){
			for (int j = i; j < n; j++)
				cout << j << "";
			sum += n++;
			result++;
			cout << endl;
		}
	}cout << "RESULT: " << result << "\n";
	return 0;
}