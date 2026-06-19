#include "logic.h"

string analize_exam_results(int* marks, int size) {
	if (size <= 0) {
		return "Error";
	}

	int* count_of_marks = new int[MAX_MARK - MIN_MARK + 1];

	init(count_of_marks, MAX_MARK - MIN_MARK + 1, 0, 0);

	for (int i = 0; i <= MAX_MARK - MIN_MARK; i++) {
		for (int j = 0; j < size; j++) {
			if (*(marks + j) == i + MIN_MARK) {
				*(count_of_marks + i) += 1;
			}
		}
	}

	string s;

	for (int i = 0; i <= MAX_MARK - MIN_MARK; i++) {
		s += "Mark " + to_string(i + MIN_MARK) + ": " 
			+ to_string(*(count_of_marks + i) / (double)size * 100) + "% "
			+ " (" + to_string(*(count_of_marks + i)) + ")\n";
	}

	delete[] count_of_marks;

	return s;
}