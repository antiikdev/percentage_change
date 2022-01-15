/**
 * Program calculates examples of percentage changes and presents
 * how the results are not equal between to changes.
 * @example Change from x point to y point and back to x point.
 * @todo (dev log for possible improvements):
 * - dynamic table to add time points
 * - Print (random) scale with points for volatility and percentage changes
 * @author www.antiik.dev, https://github.com/antiikdev
 * @version 9 Jan 2022
 */
#include <stdio.h>
#include <iostream>
using namespace std;


class Taulukko {
	size_t lkm;
	int *cell;
	int final;
	
	public:
	
};


/**
 * @brief Calculates percentage change between two points
 * @param x original point value
 * @param y new point value
 * @return percentage change
 */
double calculatePercentageChange(double *start, double *end)
{
	double r = 0;
	if ( *start > *end ) r = (1 -(*end / *start)) * 100;
	if ( *start < *end ) r = ((*end - *start) / *start) * 100;
	return r;
}


/**
 * @brief calculates example of two points percentage difference
 */
void calculateExample()
{
	printf("Program calculates percentage changes, example:\n");
	double start = 100, end = 80;
	double result = 0, newResult = 0;
	result = calculatePercentageChange(&start, &end);
	printf("Orig. points: %.0lf, new points: %.0lf, has %.2lf %% change\n",start,end,result);
	newResult = calculatePercentageChange(&end, &start);
	printf("Orig. points: %.0lf, new points: %.0lf, has %.2lf %% change\n",end,start,newResult);
}


/**
 * @brief calculates two points percentage changes 
 * based on user input.
 */
void calculateTwoUserInputs() {
	// TODO: testing and wording
	double number1 = 0, number2 = 0, result1 = 0, result2 = 0;
	cout << "Enter two numbers to calculate % change difference (e.g. 10 5) >";
	cin >> number1 >> number2;
	result1 = calculatePercentageChange(&number1, &number2);
	result2 = calculatePercentageChange(&number2, &number1);
	cout << "Change down " << result1 << " %, change up " << result2 << " %" << endl;
}


/**
 * @brief Menu for user to select functions
 * @param choice made by the user
 * @return 0 if exit and quit program, 1 continue
 */
int userMenu(int *choice)
{
	// TODO: screen flushing/cls/clear
	// cout << flush; 
	// system("PAUSE"); // asks "press any key" before continues
	cout << "1: Print example\n";
	cout << "2: Calculate two points difference\n";
	cout << "3: Quit\n";
	cout << "Enter selection >";
	cin >> *choice;
	
	switch(*choice)
	{
		case 1: // Print example
		calculateExample();
		return 1;
		
		case 2: // Three time points
		calculateTwoUserInputs();
		return 1;
		
		case 3: // Exit
		return 0; 
	}
	return 0;
}


/**
 * @brief Main to start the calculator and menu
 * @return 0 end
 */
int main(void)
{
	int userChoice = 1;
	while (userChoice > 0)
		{
			userChoice = userMenu(&userChoice);
		}
	return 0;
}
