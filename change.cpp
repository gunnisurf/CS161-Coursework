/*********************************************************************
 
 ** Author: James E. Sandoval
 
 ** Date: October 2, 2015
 
 ** Description: change.cpp - This program asks the user for an integer - in cents - from 0 to 99, and
    prints how many of each type of coin would represent that amount with the fewest total number of coins.
 
 *********************************************************************/

#include <iostream>

using namespace std;

int main(){
    
    // Sets int data types and outputs instructions to the user
    
    int cents, quarter, dime, nickel, penny;
    
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cents;
    
    // Calculations using different types of mathematical operators to determine fewest
    // number of coins given the amount entered by the user.
    
    quarter = cents / 25;
    
    dime =  (cents - quarter * 25) / 10;
    
    nickel = (cents - (quarter * 25 + dime * 10)) / 5;
    
    penny = cents - ((quarter * 25) + (dime * 10) + (nickel * 5));
    
    // Output of coins after calculations have been performed
    
    cout << "Your change will be:" << endl;
    
    cout << "Q:" << quarter << endl;
    
    cout << "D:" << dime << endl;
    
    cout << "N:" << nickel << endl;
    
    cout << "P:" << penny << endl;
    
    
    return 0;
}
