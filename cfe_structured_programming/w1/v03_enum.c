/* Enums
 * 23 Oct
 * LM
 */
#include <stdio.h>

enum day {sun, mon, tue, wed, thu, fri, sat}; // Declare type
typedef enum day day;

void print_day(day d)
{
	switch(d)
	{
		case sun: printf("Sunday"); break;
		case mon: printf("Monday"); break;
		case tue: printf("Tuesday"); break;
		case wed: printf("Wednesday"); break;
		case thu: printf("Thursday"); break;
		case fri: printf("Friday"); break;
		case sat: printf("Saturday"); break;
		default: printf(" %d is an error ", d);
	}
}

day next_day (day d)
{
	return ((d + 1) % 7);
}

day prev_day (day d)
{
	return ((d - 1) % 7);
}

int main (void)
{
	day today = sun;
	printf("Today is ");
	print_day(today);
	printf("\n\n");
	printf("Tomorrow will be ");
	print_day(next_day(today));
	printf("\n\n");
	printf("Yesterday was ");
	print_day(prev_day(today));
	printf("\n\n");
	return 0;
}
