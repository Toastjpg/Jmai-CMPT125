/*
CMPT 125 Assignment 1 Question 3
Author: Johnny Mai
Student ID: 301421429
SFU email: jma184@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Performs a row subtration on a matrix
*/

#include "question3.h"

void rowSubtraction(unsigned int rows, unsigned int columns,
    int matrix[rows][columns], unsigned int row1, unsigned int row2)
{
	// Check if row1 and row2 are valid rows within the matrix
	if ((row1 < rows) && (row2 < rows)){
		// Iterate over the length of each row
		for (int i = 0; i < columns; i++){ 
			matrix[row1][i] -= matrix[row2][i];
		}
	}
}