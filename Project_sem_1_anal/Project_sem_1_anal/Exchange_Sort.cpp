#include "Exchange_Sort.h"

template<typename T>
void Exchange_Sort(T arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i]) {
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

template void Exchange_Sort<int>(int[], int);
template void Exchange_Sort<double>(double[], int);