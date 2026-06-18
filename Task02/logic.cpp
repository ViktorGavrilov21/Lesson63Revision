#include "logic.h"

double arithmetic_mean(int* array, int size) {
	double avg;
	double sum = 0;
	int size2 = size;

	for (int i = 0; i < size; i++) {
		sum += *(array + i);
		if (*(array + i) == 0) {
			size2--;
		}
	}

	avg = sum / size2;


	return avg;
}