#include "Selection_Sort.h"

template<typename T>
void Selection_Sort(T arr[], int n) {
	for (int i = 0; i < n; i++)
	{

		int min_id = i;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[min_id]) {
				min_id = j;

			}
		}
		if (arr[i] != arr[min_id]) {
			T tmp = arr[i];
			arr[i] = arr[min_id];
			arr[min_id] = tmp;

		}

	}
}

template void Selection_Sort<int>(int[], int);
template void Selection_Sort<double>(double[], int);