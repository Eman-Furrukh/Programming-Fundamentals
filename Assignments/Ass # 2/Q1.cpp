#include <iostream>
using namespace std;

// Function to calculate the number of each currency note
void calculateNotes(int amount) {
    // Array of currency notes in descending order
    int notes[7] = {750, 350, 200, 85, 15, 3, 1};
    // Array to store the count of each note
    int noteCount[7] = {0};

    // Loops through each note and calculates the count
    for(int i = 0; i < 7; i++) {
        noteCount[i] = amount / notes[i]; 
        amount %= notes[i];  
    }

    // Display results
    cout << "Currency Note : Number" << endl;
    for(int i = 0; i < 7; i++) {
        cout << notes[i] << " : " << noteCount[i] << endl;
    }
}

int main() {
    int amount;
    // User input
    cout << "Enter the amount in TIKKA's: ";
    cin >> amount;

    // Calling the function
    calculateNotes(amount);

    return 0;
}
