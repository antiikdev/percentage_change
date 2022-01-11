/**
 * Program calculates examples of percentage changes and presents
 * how the results are not equal between to changes.
 * @example Change from x point to y point and back to x point.
 * @todo (dev log for possible improvements):
 * - ONGOING: Menu: input for changes in three time points and calc. percentages
 * - Print (random) scale with points, volatility and percentage changes
 * @author www.antiik.dev, https://github.com/antiikdev
 * @version 9 Jan 2022
 */
#include <stdio.h>
#include <iostream>
using namespace std;


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
 * @brief tests menu function with cout print
 */
void testFunction()
{
	cout << "Test completed succesfully!\n";
}


/**
 * @brief calculates two points percentage changes 
 * based on user input.
 */
void calculateTwoUserInputs() {
	// TODO: finalize
}


/**
 * @brief Menu for user to select functions
 * @param choice made by the user
 * @return 0 if exit and quit program, 1 continue
 */
int userMenu(int *choice)
{
	cout << "Choose 1: Test, 2: Two points, 3: Quit >" ;
	cin >> *choice;
	
	switch(*choice)
	{
		case 1: // Test
		testFunction();
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
 * @brief Main for testing and user input
 * @return 0 end
 */
int main(void)
{
	// first example for testing
	// TODO: move to "example method"
	printf("Program calculates percentage changes, example:\n");
	double start = 100, end = 80;
	double result = 0, newResult = 0;
	result = calculatePercentageChange(&start, &end);
	printf("Orig. points: %.0lf, new points: %.0lf, has %.2lf %% change\n",start,end,result);
	newResult = calculatePercentageChange(&end, &start);
	printf("Orig. points: %.0lf, new points: %.0lf, has %.2lf %% change\n",end,start,newResult);
	
	// Main to ask user input
	int userChoice = 1;
	while (userChoice > 0)
		{
			userChoice = userMenu(&userChoice);
		}
	return 0;
}
