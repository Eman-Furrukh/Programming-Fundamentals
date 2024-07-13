#include <iostream>
using namespace std;

void toUpperCase(string &str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
        	// Convert lowercase to uppercase
            str[i] = str[i] - 'a' + 'A'; 
        }
    }
}

void countOccurrences(const string &str) {
    // Array to count occurrences of each alphabet
	int occurrences[26] = {0}; 
    // Count occurrences 
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            occurrences[str[i] - 'A']++;
        }
    }
    // Print occurrences
    cout << "Character   Occurrences" << endl;
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        if (occurrences[ch - 'A'] > 0) {
            cout << ch << "          " << occurrences[ch - 'A'] << endl;
        }
    }
}

int main() {
    string input;
    cout << "Enter a line of string: ";
    getline(cin, input);
    // Convert input to uppercase
    toUpperCase(input);
    cout << "In capital case: " << input << endl;
    // Count and display occurrences
    countOccurrences(input);

    return 0;
}

