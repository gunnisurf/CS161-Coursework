/*********************************************************************
 
 ** Author: James E. Sandoval
 
 ** Date: October 2, 2015
 
 ** Description: Average.cpp - This program asks the user for five numbers and then prints out the average of those numbers.
 
 *********************************************************************/

#include <iostream>

using namespace std;

int main() {
    
    // Define 5 data types
    double num1, num2, num3, num4, num5;
    
    // Print to screen what the program does and asks for 5 numbers
    cout << "This Program takes 5 number unputs from the user and prints the average.\n";
    cout << "Please enter number 1:";
    cin >> num1;
    cout << "Please enter number 2:";
    cin >> num2;
    cout << "Please enter number 3:";
    cin >> num3;
    cout << "Please enter number 4:";
    cin >> num4;
    cout << "Please enter number 5:";
    cin >> num5;
    
    // calculation to determien the average of all 5 numbers
    double average = (num1 + num2 + num3+ num4 + num5) / 5;
    
    // Print to screen the average of the five numbers
    cout << "The average of your five numbers is:" << average << "\n\n";
    
    return 0;
}
# CS161
#CS161
