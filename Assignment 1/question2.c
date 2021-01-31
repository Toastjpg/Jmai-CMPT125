/*
CMPT 125 Assignment 1 Question 2
Author: Johnny Mai
Student ID: 301421429
SFU email: jma184@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Returns the index of ints that add up to a target
*/

#include "question2.h"

void findPair(int array[], unsigned int size, int target, char* result){
	// Control variable
	int found = 0;

	// Loop through for every item in array[]
	for (int i = 0; i < size && found == 0; i++){
		for (int k = 0; k < size; k++){
			// Check for when index positions are the same
			if (i == k){
				// Skip check for equal index
				k++;
			}
			// Check if ints at the i and k add up to target
			else if (array[i] + array[k] == target){
				found = 1;
				// Add to result the index positions
				sprintf(result, "%d+%d", i, k);
			}
		}
	}
	// Add the cstring not_found
	if (found == 0){
		sprintf(result, "not_found");
	}
}