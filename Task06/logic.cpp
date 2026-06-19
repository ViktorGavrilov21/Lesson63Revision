#include "logic.h"

void sort_from_range(int* array, int size, int a, int b) {
	if (size <= 0) {
		return;
	}

	for (int i = a - 1; i < b; i++) {
		bool swapped = false;

		for (int j = 0; j < size - 1 - i; j++) {
			bool need_swap = false;


			need_swap = (*(array + j) > *(array + j + 1));

			if (need_swap) {
				int temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
				swapped = true;
			}
		}
	}
}