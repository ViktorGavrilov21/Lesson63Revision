#include "logic.h"

int find_max_num_index(int* array, int size) {
	int max = *array;

	for (int i = 0; i < size; i++) {
		if (max < *(array + i)) {
			max = *(array + i);
		}
	}

	for (int i = 0; i < size; i++) {
		if (*(array + i) == max) {
			max = i;
			break;
		}
	}

	return max;
}

int find_min_num_index(int* array, int size) {
	int min = *array;

	for (int i = 0; i < size; i++) {
		if (min > *(array + i)) {
			min = *(array + i);
		}
	}

	for (int i = 0; i < size; i++) {
		if (*(array + i) == min) {
			min = i;
			break;
		}
	}

	return min;
}

int sum(int* array, int size) {
	if (size <= 0) {
		return -1;
	}

	int sum = 0;
	int min = find_min_num_index(array, size);
	int max = find_max_num_index(array, size);

	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}

	for (int i = min + 1; i < max; i++) {
		sum += *(array + i);
	}


	return sum;
}