// Course  : CS213 - Programming II  - 2018
// Title   : Assignment III - Task 2 - number 5
// Book    : Programing-Abstraction - Page 350 - Problem 8
// Program : Digital Root
// Purpose : Calculating the digital root without using loops, only recursion.
// Author  : Salma Essam Soliman
// ID      : 2017015
// Date    : 11 / 2 / 2018
// Version : 1.0

#include <iostream>

using namespace std;

// The function takes a non-negative integer
// and returns the result of summing its digits
// repeatedly until only one digit remains
// using recursion but without using any
// explicit loop constructs.

int digitalRoot( int num ){
    if ( num < 10 )
    {
            return num;
    }
    digitalRoot( ( num % 10 ) + digitalRoot( num / 10 ) );
}
int main()
{
    cout << "Ahlan ya user ya habibi." << endl;
    cout << "------------------------------------------\n";
    int num;
    cout << "\nPlease enter a number :\n";
    cin >> num;
    while ( num < 0 )   // To make sure that the input is non-negative.
    {
        cout << "\nPlease enter a non-negative number :\n";
        cin >> num;
    }
    cout << "\nThe digital root = " << digitalRoot( num ) << endl;
    cout << "\n------------------------------------------\n";
    cout << "\nThank you for using this program.\n";

    return 0;
}
