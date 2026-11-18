#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define MAX_SIZE 100

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	int n;
	printf("Введите количество элементов массива n = ");
	scanf("%d", &n);

	if (n <= 0 || n > MAX_SIZE)
	{
		printf("Ошибка");
	}
	int arr[MAX_SIZE];

	printf("\nВведите %d целых чисел\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int first = -1;
	int last = -1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			if (first == -1)
			{
				first = 1;
			}
			last = i;
		}
	}
	if (first == -1)
	{
		printf("В массиве нет отрицательных элементов");
	}
	long long product = 1;

	for (int i = first; i <= last; i++)
	{
		product *= arr[i];
	}
	printf("\nРЕЗУЛЬТАТЫ\n");
	printf("Первый отрицательный элемент arr[%d] = %d\n", first, arr[first]);
	printf("Последний отрицательный элемент arr[%d] = %d\n", last, arr[last]);
	printf("Произведение элементов в этом диапазоне = %lld\n", product);

	return 0;
}