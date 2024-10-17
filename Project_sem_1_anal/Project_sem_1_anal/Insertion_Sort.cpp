#include "Insertion_Sort.h"

template <typename T>
void Insert_Sort(T arr[], int n) {

	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1]) {
				T tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
			else { 
				break;
			}
		}
	}
}

template void Insert_Sort<int>(int[], int);
template void Insert_Sort<double>(double[], int);