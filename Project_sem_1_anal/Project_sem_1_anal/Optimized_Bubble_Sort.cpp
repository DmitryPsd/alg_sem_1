#include "Optimized_Bubble_Sort.h"

template<typename T>
void Optimized_Bubble_Sort(T arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swapped = true;
			}
		}
		if (!swapped)
			break;

	}
}

template void Optimized_Bubble_Sort<int>(int[], int);
template void Optimized_Bubble_Sort<double>(double[], int);