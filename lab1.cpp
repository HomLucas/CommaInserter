//============================================================================
// Name        : lab1.cpp
// Author      : Lucas Hom
// Version     : September 15, 2013
// Class       : cs1110c
// Description : This program contains a function that shows commas for the
//				user inputted integer.  It accepts positive integers.
//============================================================================

#include <iostream>
using namespace std;

//@param function accepts an integer
//@pre number must be in integer
//@post integer is not changed but it is printed with formatting
//recursive function will keep calling itself unti the number is down to the last 3 digits then it will print and exit every iteration

void showCommas(int number)
{
	if(number < 1000)
	{
		cout << number;
	}
	else
	{
		//recursive call
		showCommas(number/1000);
		if(number%1000 < 10)
		{
			cout << "," << "00" << number%1000;
		}
		else if(number%1000 < 100)
		{
			cout << "," << "0" << number%1000;
		}
		else
		{
			cout << "," << number%1000;
		}
	}
}


int main() {
	//number that is to be formatted
	int unformattedNumber;
	cout << "Enter the number you wish to be formatted: ";
	//read user input for integer
	cin >> unformattedNumber;
	//calls the function with the integer user has inputted
	showCommas(unformattedNumber);
	return 0;
}
