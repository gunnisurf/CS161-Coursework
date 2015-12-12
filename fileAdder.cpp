/*********************************************************************
 
 ** Author: James E. Sandoval
 
 ** Date: October 12, 2015
 
 ** Description: fileAdder.cpp - This program prompts the user for the name of a file and attempts to open the file. If the file is able to be opened, the program will read the integers in the file, add all the numbers will be summed and written to a file called sum.txt.
 
 *********************************************************************/

#include <iostream>
#include <string>  // necessary to use string data type
#include <fstream> // necessary to access a file


using namespace std;

int main(){
    
    ifstream inputFile;
    ofstream outputFile;
    string filename;
    
    int nums, sum;
    
    
    // Ask the user to enter a filename
    cout << "Please enter a filename:";
    cin >> filename;
    
    // Attempt to open the input file
    inputFile.open(filename.c_str());
    
    // If the file is successfully opened, process it
    if (inputFile) {
        cout << "reading data from file..." << endl;
        // Loop until the EOF is reached
        while (inputFile >> nums) {
            sum += nums;
        }
        
        // close the input file
        inputFile.close();
        
        // Open the output file
        outputFile.open("sum.txt");
        cout << "Now writing data to the file..." << endl;
        
        // Write the sum of integers to the file
        outputFile << sum;
        
        // Close the file
        outputFile.close();
        
        // If the program completed, this line will print.
        cout << "The program has executed properly." << endl;
        
    }
    
    else {
        // Display an error message and end program.
        cout << "could not access file." << endl;
        
    }

    
    return 0;
}