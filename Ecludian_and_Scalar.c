/***************************************************************************************************************************
Program Name: Array_functions.c
Author: Emmanuel Anokwuru
Short description: This program basically the scalar product and the eucludian distance of vectors, as well as the sum and average of numbers
Date:25.11.2020
*************************************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>               //
#include<stdlib.h>                  //
#include<math.h>
// sum up array elements
double sum_up(double* array, int num_elements) {
    double sum = 0.0;
    for (int i = 0; i < num_elements; i = i + 1) // all from 0 to num_elements-1
        sum = sum + array[i]; // sum up
    return sum;
}
// calculating average of array elements
double calc_average(double* array, int num_elements) {
    double sum = 0.0;
    double average = 0.0;
    for (int i = 0; i < num_elements; i = i + 1) // all from 0 to num_elements-1
        sum = sum + array[i]; // sum up
    average = sum / num_elements;
    return average;
}


// This function stores vector values to a variable
void get_value(double* vector_arry, int dim) {
    int counter = 0;
    do
    {
        printf("Input a number value: ");
        scanf("%lf", &vector_arry[counter]);
        counter++;
    } while (counter != dim);
}


//calculating the scalar product of two vectors
double scalar_product(double *vector1, double *vector2, int dim) {
    double dot_product = 0.0;
    int i;
    for ( i= 0; i <dim; i++) {
        dot_product += vector1[i] * vector2[i];
    }
    return dot_product;
}

// this function calculates the eucludian distance of two vectors
double distance(double *vector1, double *vector2, int dim) {
    int i;
    double difference = 0.0;
    double power = 0.0;
    double eucludian_distance = 0.0;
    for (i = 0; i < dim; i++) {
        difference = (vector1[i] - vector2[i]);  // calculating the differences
        power += difference * difference;        // calculating squares of differences
    eucludian_distance = sqrt(power); 
    }
    return eucludian_distance;
}

int main(void) {
    
    double numbers[4] = { 1.0, 4.0, 7.7, 10.9 }; // example numbers
    double sum =
        sum_up(&numbers[0], 4); // Address of start of array
        // and length of the array
    double average = calc_average(&numbers[0], 4);
    printf("The sum is %4.2lf\n", sum);
    printf("The average is %4.2lf\n", average);

    
    double vector1[3], vector2[3];      // declaring the input variable
    printf("Please input vector1 values: \n");           //asking 
    get_value(vector1, 3);                    // and storing values into vector1 variable
    printf("Please input vector2 values:\n");                             //asking 
    get_value(vector2, 3);                                  // and storing values into vector2 variable

    double scl_product = scalar_product(vector1, vector2, 3);  // calculates and 
    printf("The scalar product of the two vectors is %4.2lf\n", scl_product); // prints out the scalar product

    
    double eucludian_distance = distance(vector1, vector2, 3);   // calls the distance function on the two collected vectors
    printf("The distance between the two vectors is %4.2lf\n", eucludian_distance); // prints the eucludian distance.


    return 0;
}
