#include <iostream>
using namespace std;

// Function to extract and display the components of the ID
void displayArmyInfo(string name, unsigned int id) {
    // Mask and shift to extract the Belt number (7 bits)
    unsigned int beltNumber = id & 0x7F;
    // Mask and shift to extract the Batch number (10 bits)
    unsigned int batchNumber = (id >> 7) & 0x3FF;
    // Mask and shift to extract the Log number (5 bits)
    unsigned int logNumber = (id >> 17) & 0x1F;
    // Mask and shift to extract the Unit number (10 bits)
    unsigned int unitNumber = (id >> 22) & 0x3FF;
    // Display the extracted information
    cout << "Belt number of " << name << " is : " << beltNumber << endl;
    cout << "Batch number of " << name << " is: " << batchNumber << endl;
    cout << "Log number of " << name << " is: " << logNumber << endl;
    cout << "Unit number of " << name << " is: " << unitNumber << endl;
}

int main() {
    string name;
    unsigned int id;
    // User Input to enter name
    cout << "Enter Name of Army Man: ";
    getline(cin, name);
    // User Input to enter ID
    cout << "Enter ID of Army Man: ";
    cin >> id;
    // Call the function
    displayArmyInfo(name, id);
    return 0;
}

