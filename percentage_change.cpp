/**
 * Program calculates examples of percentage changes and presents
 * how the results are not equal between to changes.
 * @example Change from x point to y point and back to x point.
 * @todo (dev log for possible improvements):
 * - Menu for user input
 * - print (random) scale with volatility and percentage changes
 * @author www.antiik.dev, https://github.com/antiikdev
 * @version 9 Jan 2022
 */
#include <stdio.h>


/**
 * @brief Calculates percentage change between two points
 * @param x original point value
 * @param y new point value
 * @return percentage change
 */
double calculatePercentageChange(double *x, double *y) {
	double r = (1 -(*y / *x)) * 100;
	return r;
}


/**
 * @brief Main for testing and user input
 * @return 0 end
 */
int main(void)
{
	// first example for testing
	printf("Program calculates examples of percentage changes, example:\n");
	double x = 100;
	double y = 80;
	double result = 0;
	result = calculatePercentageChange(&x, &y);
	printf("Original points: %.0lf, new points: %.0lf, equals %.2lf %% change\n",x,y,result);
	
	// Main to ask user input
	
	return 0;
}
