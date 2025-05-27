//shell≈≈–Ú//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void shell(int arr[], int len, int first_gap)
{
	int i;
	int j;
	for (j = first_gap; j > 0; j--)
	{
		for (i = 0; i <= len - first_gap-1; i++)
		{
			if (arr[i] > arr[i + first_gap])
				swap(arr + i, arr + i + first_gap);
		}
	}
	int m;
	int k;
	int d;
	for (m = 0; m < len; m++)
	{
		for (k = m + 1; k < len; k++)
		{
			if (arr[k] < arr[m])
			{
				int temp;
				temp = arr[k];
				for (d = k; d > m; d--)
				{
					arr[d] = arr[d - 1];
				}
				arr[m] = temp;
			}
		}
	}
}
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 6, 100, 25,20,29, 12, 22, 11, 90,58,45,99,101 };
	int s = sizeof(arr) / sizeof(arr[0]);
	shell(arr, s, 8);
	printf("Sorted array: \n");
	printArray(arr, s);
	return 0;

}