// Todd Muller 
//Lab1.cpp : Finds the number of integers in a text file and shows the first and last 2 integers in the file.
// TA: Shagadish

#include "stdafx.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::ifstream;
using namespace std;

int main()
{
	std::ifstream ifs;
	//Open the text file
	string r = "num3.txt";
	ifs.open(r, std::ifstream::in);

	// Initialize the variables to store last 2 numbers of the sequence
	double c(0),d(0),e(0),f(0);
	int num_count=0;
	//cout << c << "\n";
	int first_num, second_num, second_last_num, last_num;
	
	//Read the text at locations containing numbers
	while (!ifs.fail())
	{
		//Store the number into the variable c
			ifs>>c;
			if (num_count > 1)
			{
				if (!(c == d))
				{
				//Cycle through the last 2 numbers
				e = d;
				d = c;
				}
			}
			else if (num_count == 0)
			{
				//Store the first number
				first_num = c;
			}
			else if (num_count == 1)
			{
				//Store the second number
				second_num = c;
			}
			//Save the number count
			num_count += 1;
	}
	num_count = num_count - 1;
	//Store the last 2 numbers
	last_num = c;
	second_last_num = e;
	//Output
	cout << "The number count is: " << num_count <<"\n";
	cout << "The first number is: " << first_num << "\n";
	cout << "The second number is: " << second_num << "\n";
	cout << "The second to last number is: "<< second_last_num << "\n";
	cout << "The last number is: " << last_num << "\n";

	//Close the file
	ifs.close();
	return 0;
}




