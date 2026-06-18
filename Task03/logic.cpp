#include "logic.h"

string find_number_of_local_min_max(int* array, int size) {
	int count_min = 0;
	int count_max = 0;

	if (*array < *(array + 1)) {
		count_min++;
	}
	if (*array > *(array + 1)) {
		count_max++;
	}
	if (*(array + size - 1) < *(array + size - 2)) {
		count_min++;
	}
	if (*(array + size - 1) > *(array + size - 2)) {
		count_max++;
	}

	for (int i = 1; i < size - 1; i++) {
		if (*(array + i) < *(array + i - 1) && *(array + i) < *(array + i + 1)) {
			count_min++;
		}
		if (*(array + i) > *(array + i - 1) && *(array + i) > *(array + i + 1)) {
			count_max++;
		}
	}

	string s = "Count of local min number is: " + to_string(count_min) + "\n" +
		"Count of local max number is: " + to_string(count_max) + "\n";


	return s;
}