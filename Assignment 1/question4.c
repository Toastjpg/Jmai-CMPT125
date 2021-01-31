/*
CMPT 125 Assignment 1 Question 4
Author: Johnny Mai
Student ID: 301421429
SFU email: jma184@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Takes in a cstring representing a math operation and returns the result
*/

#include "question4.h"

int performMathOp(char* operation){
	// Stores the index position of math operator
	int opPos = 0;
	int firstNum = 0;
	int secondNum = 0;
	int ans = 0;

	// Iterate through to find position of operator
	for (int i = 0; operation[i] != '\0'; i++){
		if (operation[i] == '+' || operation[i] == '-' || operation[i] == '*'){
			opPos = i;
		}
	}

	// Iterate over first half of operation 
	for (int i = 0; i < opPos; i++){
		// Converting digit char into ints and builds firstNum
		firstNum = firstNum * 10 + operation[i] - '0';
	}

	// Iterate over second half starting at index of operator
	for (int i = opPos + 1; operation[i] != '\0'; i++){
		secondNum = secondNum * 10 + operation[i] - '0';
	}

	// Check opPos and perform relevant operation
	if (operation[opPos] == '+'){
		ans = firstNum + secondNum;
	}
	else if (operation[opPos] == '-'){
		ans = firstNum - secondNum;
	}
	else{
		ans = firstNum * secondNum;
	}

	return ans;
}
