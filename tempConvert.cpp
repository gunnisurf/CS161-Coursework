/*********************************************************************
 
 ** Author: James E. Sandoval
 
 ** Date: October 12, 2015
 
 ** Description: minmax.cpp - This program asks the user to input a total number of integers (greater than 1) they would like to enter. The program will then prompt the user to input an integer based on the amount specified, then the program will return the min and max values of the data set. 
 
 *********************************************************************/

#include <iostream>


using namespace std;

int main(){
    
    // Define two data type variables
    double celcius, farenheight;
    
    // Ask the user for a celcius temperature
    cout << "Please enter a Celcius temperature:";
    cin >> celcius;
    
    // Calculate the user input and convert to farenheight
    farenheight = (9.0 / 5.0) * celcius + 32;
    
    // Print the output of the conversion
    cout << "The equivalent Farenheight temperature is: " << farenheight << endl;
    
    return 0;
}