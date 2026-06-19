#include "logic.h"

int find_max_num(int* array, int size) {
	int max = *array;
	for (int i = 0; i < size; i++) {
		if (max < *(array + i)) {
			max = *(array + i);
		}
	}
	return max;
}

int find_min_num(int* array, int size) {
	int min = *array;
	for (int i = 0; i < size; i++) {
		if (min > *(array + i)) {
			min = *(array + i);
		}
	}
	return min;
}

double arithmetic_mean(int* array, int size) {
	if (size <= 0) {
		return -1.0;
	}

	double sum = 0;
	int size2 = size;
	int min = find_min_num(array, size);
	int max = find_max_num(array, size);

	for (int i = 0; i < size; i++) {
		if (*(array + i) == min || *(array + i) == max) {
			size2--;
		}
		else {
			sum += *(array + i);
		}
	}

	double avg = sum / size2;


	return avg;
}