#include <iostream>
using namespace std;

const double PI = 3.14159; // Constant for Pi

// Function prototypes
void displayMenu();
void calculateCircleArea();
void calculateRectangleArea();
void calculateTriangleArea();

int main() {
    int choice;
    do {
        // Display menu and get user choice
        displayMenu();
        cin >> choice;

        // Switch case for users choice
        switch(choice) {
            case 1:
                calculateCircleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateTriangleArea();
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Error: Invalid choice. Please enter a number from 1 to 4." << endl;
        }
    } while (choice != 4);
    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
}

// Function to calculate the area of a circle
void calculateCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius >= 0) {
        double area = PI * radius * radius;
        cout << "Area of the circle: " << area << endl;
    } else {
        cout << "Error: Radius cannot be negative." << endl;
    }
}

// Function to calculate the area of a rectangle
void calculateRectangleArea() {
    double length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    if (length >= 0 && width >= 0) {
        double area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    } else {
        cout << "Error: Length and width cannot be negative." << endl;
    }
}

// Function to calculate the area of a triangle
void calculateTriangleArea() {
    double base, height;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    if (base >= 0 && height >= 0) {
        double area = 0.5 * base * height;
        cout << "Area of the triangle: " << area << endl;
    } else {
        cout << "Error: Base and height cannot be negative." << endl;
    }
}

