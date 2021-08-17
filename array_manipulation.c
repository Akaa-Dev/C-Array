

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>               
#include<stdlib.h>                
 
// this takes in the inputed value and prints it out as an array
void print_int_array(int* number_array, int num) {
	int i;
	for ( i = 0; i < num; i++) {
		printf("%d ",number_array[i]);
	}
}


// this swaps two values
void swap(int* a, int* b) {
	int temp_address = *a;
	*a = *b;
	*b = temp_address;
	
}

int main() {

	
	int number_array[10];
	for (int i = 0; i < 10; i++) {   // asking user for 10 input values
		printf("Enter a number: ");
		scanf("%d", &number_array[i]);
	}
	print_int_array(number_array, 10);    // prints the inputed values as an array
	printf("\n");


	

	int size_of_array = sizeof(number_array);                // getting the size of the array
	printf("An int contains %d byte and %dbits, therefore,\n", sizeof(int), sizeof(int) * 8);
	printf("The size of the array in byte is %d and the size of the array in bits is %d \n", size_of_array, size_of_array * 8);//

	   
						// shifting to the left
	printf("Shift to the left :\n");
	int left_num = number_array[0];      // stores the first value to a variable for easy access
	for (int i = 0; i < 10; i++) {
		number_array[i] = number_array[i + 1];
	}
	number_array[9] = left_num;
	print_int_array(&number_array, 10);
	printf("\n");


	//shifting right
	printf("Shift to the right :\n");
	int first_num = number_array[9];           // stores the last value to a variable for easy access
	for (int i = 8; i > -1; i--) {
		number_array[i + 1] = number_array[i];
	}
	number_array[0] = first_num;
	print_int_array(&number_array, 10);
	printf("\n");

	
	printf("Swap Unsorted neighbors \n");         
	swap(&number_array[1], &number_array[8]);        // swapping the second value with the third value
	print_int_array(&number_array, 10);
	printf("\n");

	/
	printf("Swap Neighbours: \n");
	for (int i = 0; i < 9; i++) {
		if (number_array[i] > number_array[i + 1]) {         // swaps neighboring numbers
			swap(&number_array[i], &number_array[i + 1]);         
		}
	}
	print_int_array(&number_array, 10);
	printf("\n");

	
	printf("Swap Neighbours Nine Times: \n");            // This will swap everything nine times
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (number_array[j] > number_array[j + 1]) {
				swap(&number_array[j], &number_array[j + 1]);
			}
		}
	}
	print_int_array(&number_array, 10);
	printf("\n");

	return 0;
}
