/*
CMPT 125 Assignment 1 Question 1
Author: Johnny Mai
Student ID: 301421429
SFU email: jma184@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Function that interlaces the digits of a positive 4 and 5 digit int
*/

#include "question1.h"

unsigned int interlace_ints(unsigned int firstNum, unsigned int secondNum){
	int ans = 0;
	int const FIRSTNUMLEN = 4;
	int const SECONDNUMLEN = 5;
	int const ANSNUMLEN = 9;
	int firstArr[4];
	int secArr[5];
	int ansArr[9];

	// Iterate over digits of firstNum in reverse order using mod and division
	for (int i = 0; i < FIRSTNUMLEN; i++){
		// Grabs last digit as the remainder when divided by 10
		int digit = firstNum % 10;
		*(firstArr + (FIRSTNUMLEN - 1 - i)) = digit;
		// Divide firstNum by 10 to shift decimal place left by one
		firstNum /= 10;
	}

	// Iterate over digits of secondNum in reverse order using mod and division
	for (int i = 0; i < SECONDNUMLEN; i++){
		// Grabs last digit as the remainder when divided by 10
		int digit = secondNum %10;
		*(secArr + (SECONDNUMLEN - 1 - i)) = digit;
		// Divide secondNum by 10 to shift the decimal place left by one
		secondNum /= 10;
	}

	// Copy digits from secArr into ansArr into every even index position
	for (int i = 0, k = 0; i < SECONDNUMLEN; i++, k += 2){
		ansArr[k] = secArr[i];
	}

	// Copy digits from firstArr into ansArr into every odd index position
	for (int i = 0, k = 1; i < FIRSTNUMLEN; i++, k += 2){
		ansArr[k] = firstArr[i];
	}

	// Building int ans using digits from ansArr
	for (int i = 0; i < ANSNUMLEN; i++){
		ans = ans * 10 + ansArr[i];
	}

	return ans;
}

