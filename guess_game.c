#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int number , guess, nguesses = 1;
	// generates a new no everytime the program runs
	srand(time(0));
	// generates the random no 
	number = rand()%100 + 1; 
	// printing the random number for checking whether the condition is correct or not 
	//	printf("  %d is the random number\n",number); 
	
	do {
		// input the guessed number
		printf("Guess the number: \n");
		scanf("%d",&guess);
		
		// condition for checking if the number guessed it correct or not 
		if(number<guess) {
			printf("LOWER NUMBER PLEASE !!!!\n");
		}
		else if(number>guess) {
			printf("HIGHER NUMBER PLEASE !!!!\n");
		}
		else {
			printf("BINGO!!!!  YOU GUESSED IT IN %d ATTEMPTS\n",nguesses);
		}
		
		// incrementing the attempts of guessess
		nguesses ++;
	} while(number != guess);
	
	return 0;
}
