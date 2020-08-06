#include <stdio.h>
#include <windows.h>
int Count_One_Bits(unsigned int value) {
	int count = 0;
	unsigned int num = value;
	for (int i = 0; i < 8; ++i) {
		if ((num & 1) == 1) {
			++count;
		}
		num /= 2;
	}
	return count;
}
int main() {
	printf("%d\n", Count_One_Bits(15));

	system("pause");
	return 0;
}

