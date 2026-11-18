#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	int n;
	printf("Введите количество элементов массива n = ");
	scanf("%d", &n);

	int arr[n];
	printf("\nВведите %d целых чисел\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	return 0;
}