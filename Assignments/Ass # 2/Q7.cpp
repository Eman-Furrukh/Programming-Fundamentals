#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

// Function to perform operations based on opcode
void performOperation(int opcode, int leftOperand, int rightOperand) {
    int result = 0;
    switch (opcode) {
        case 0:
            cout << "Operation: Display Value of Right Operand" << endl;
            result = rightOperand;
            break;
        case 1:
            cout << "Operation: Display Value of Left Operand" << endl;
            result = leftOperand;
            break;
        case 2:
            cout << "Operation: Take Random input in Right operand" << endl;
            result = rand() % 64; // generate a random number between 0 and 63
            break;
        case 3:
            cout << "Operation: Take Random input in Left operand" << endl;
            result = rand() % 64; // generate a random number between 0 and 63
            break;
        case 4:
            cout << "Operation: Add Left and Right operand" << endl;
            result = leftOperand + rightOperand;
            break;
        case 5:
            cout << "Operation: Calculate Subtraction of operands (Subtract Smaller from Larger)" << endl;
            if (leftOperand >= rightOperand)
                result = leftOperand - rightOperand;
            else
                result = rightOperand - leftOperand;
            break;
        case 6:
            cout << "Operation: Multiply Left and Right operand" << endl;
            result = leftOperand * rightOperand;
            break;
        case 7:
            cout << "Operation: Calculate division of operands (Divide Larger from smaller)" << endl;
            if (leftOperand >= rightOperand)
                result = leftOperand / rightOperand;
            else
                result = rightOperand / leftOperand;
            break;
        case 8:
            cout << "Operation: Calculate remainder of operands (Larger from smaller)" << endl;
            if (leftOperand >= rightOperand)
                result = leftOperand % rightOperand;
            else
                result = rightOperand % leftOperand;
            break;
        case 9:
            cout << "Operation: Bitwise OR of Left and Right operand" << endl;
            result = leftOperand | rightOperand;
            break;
        case 10:
            cout << "Operation: Bitwise AND of Left and Right operand" << endl;
            result = leftOperand & rightOperand;
            break;
        case 11:
            cout << "Operation: Bitwise XOR of Left and Right operand" << endl;
            result = leftOperand ^ rightOperand;
            break;
        case 12:
            cout << "Operation: Complement of Right" << endl;
            result = ~rightOperand;
            break;
        case 13:
            cout << "Operation: Complement of Left" << endl;
            result = ~leftOperand;
            break;
        case 14:
            cout << "Operation: Left Operand << Right Operand" << endl;
            result = leftOperand << rightOperand;
            break;
        case 15:
            cout << "Operation: Left Operand >> Right Operand" << endl;
            result = leftOperand >> rightOperand;
            break;
        default:
            cout << "Invalid opcode." << endl;
            return;
    }
    // Display operand values and result
    cout << "Left Operand: " << leftOperand << endl;
    cout << "Right Operand: " << rightOperand << endl;
    cout << "Result: " << result << endl;
}

int main() {
    int instruction;
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));
    // User inout for a 16 bit instruction
    cout << "Enter a 16-bit instruction (in decimal): ";
    cin >> instruction;
    // Extract opcode, left operand, and right operand from the instruction
    int opcode = (instruction >> 12) & 0xF; // Extracting 4 bits from the most significant bits
    int leftOperand = (instruction >> 6) & 0x3F; // Extracting 6 bits from the middle
    int rightOperand = instruction & 0x3F; // Extracting 6 bits from the least significant bits
    // Perform the operation based on the opcode
    performOperation(opcode, leftOperand, rightOperand);
    return 0;
}

