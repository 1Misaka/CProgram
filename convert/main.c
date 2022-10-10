#include<stdio.h>
void convert(int* result, int n) {
	if (n >= 10) {
		convert(result + 1, n / 10);
		*result = n % 10;
	}
	else *result = n;
}
	int main(){
		int n = 123456789;
		int result[20];
		convert(result, n);
		printf("%d\n",n);
		for (int i = 0; i < 9; ++i)
		{
			printf("%d:\n", result[i]);
		}
		return 0;
	}
