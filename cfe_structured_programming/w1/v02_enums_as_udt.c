/* User Defined Types: Enumeration
 * 23 Oct
 * LM
 */
#include <stdio.h>

int main (void)
{
	enum day {sun, mon, tue, wed, thu, fri, sat};
	enum day today = fri;
	printf("%d\n", today);
	return 0;
}
