#include <stdio.h>

// returns the index of the unique number
int findUnique(const float *array);

int main(void){
	
	const float array[10] = {4, 3.16, 3.16, 3.16, 3.16, 3.16, 3.16, 3.16, 3.16, 3.16};
	
	printf("The unique element is located at index %d\n", findUnique(array));
	
	return 0;
}

int findUnique(const float *array){
	int index;
	float not_unique = array[0];
	if (not_unique != array[1] && array[1] == array[2]) return 0;
	for (index = 0; array[index] == not_unique; index++);
	return index;
}