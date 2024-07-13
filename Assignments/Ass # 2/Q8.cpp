#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

// Function to generate three random numbers between 0 and 9
void generateLotteryNumbers(int lotteryNumbers[3]) {
    for (int i = 0; i < 3; ++i) {
    	// generates a random number between 0 and 9
        lotteryNumbers[i] = rand() % 10;  
    }
}

// Function to compare user's guesses with the lottery numbers and display results
void compareGuesses(int lotteryNumbers[3], int userGuesses[3]) {
    int matches = 0;
    bool exactOrder = true;
    // Compare each guess with the corresponding lottery number
    for (int i = 0; i < 3; ++i) {
        if (lotteryNumbers[i] == userGuesses[i]) {
            matches++;
        } else {
            exactOrder = false;
        }
    }
    // Determine and display the result based on matches and exact order
    if (matches == 3 && exactOrder) {
        cout << "Congratulations! You got all three numbers in exact order!" << endl;
    } else if (matches == 3 && !exactOrder) {
        cout << "Congratulations! You got all three numbers, but not in exact order!" << endl;
    } else if (matches == 2) {
        cout << "Good job! You got two numbers matching!" << endl;
    } else if (matches == 1) {
        cout << "You got one number matching!" << endl;
    } else {
        cout << "Sorry, no matches this time. Better luck next time!" << endl;
    }
    // Display the lottery numbers 
    cout << "Lottery Numbers were: " << lotteryNumbers[0] << " " << lotteryNumbers[1] << " " << lotteryNumbers[2] << endl;
}

int main() {
    int lotteryNumbers[3];
    int userGuesses[3];
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));
    // Generate lottery numbers
    generateLotteryNumbers(lotteryNumbers);
    // User input to make guesses
    cout << "Welcome to the Lottery Game!" << endl;
    cout << "Enter your three guesses (each between 0 and 9): ";
    cin >> userGuesses[0] >> userGuesses[1] >> userGuesses[2];
    // Compare user's guesses with the lottery numbers and display results
    compareGuesses(lotteryNumbers, userGuesses);
    return 0;
}

