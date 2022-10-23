/* Compute average weight
 * LM
 * 
 * If you run this, please make sure you have the raw data in the same
 * directory of the code and binary, and that is called "elephants.dat"
 *
 */
#include <stdio.h>

int main (void)
{
	// Declare:
	// Generic number to store values from the file, int n
	// Variable for average, int n
	// Variable for sum of weight, int sum initialized on 0
	// Counter to store the amount of values, int i initialized on 0
	int n, average, sum = 0, i = 0;
	// Create a file pointer and open it to read, hence "r" option
	FILE *file;
	file = fopen("elephants.dat", "r");

	// Error handling
	if (file == NULL)
	{
		printf("ERROR: File does not exist!");
	} 
	else
	{
		// Scan file while there are numbers
		while (fscanf(file, "%d", &n) == 1)
		{
			sum += n; // Add the number n to the sum
			i +=1; // Increase the counter
		}
		average = sum/i; // Compute the average
	}

	fclose(file); // Close file

	printf("Average weight = %d\n", average); // Print average weight

	return 0;
}
