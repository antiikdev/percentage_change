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
double calculatePercentageChange(double *start, double *end) {
	double r = 0;
	if ( *start > *end ) r = (1 -(*end / *start)) * 100;
	if ( *start < *end ) r = ((*end - *start) / *start) * 100;
	return r;
}


/**
 * @brief Main for testing and user input
 * @return 0 end
 */
int main(void)
{
	// first example for testing
	printf("Program calculates percentage changes, example:\n");
	double start = 100, end = 80;
	double result = 0, newResult = 0;
	result = calculatePercentageChange(&start, &end);
	printf("Orig. points: %.0lf, new points: %.0lf, has %.2lf %% change\n",start,end,result);
	newResult = calculatePercentageChange(&end, &start);
	printf("Orig. points: %.0lf, new points: %.0lf, has %.2lf %% change\n",end,start,newResult);
	
	// Main to ask user input
	
	
	return 0;
}
