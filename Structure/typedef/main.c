#include <stdio.h>
#include <stdlib.h>

// private include
/* BEGIN USER CODE PI */
#include <time.h>
/* END USER CODE PI */

// private define
/* BEGIN USER CODE PD */
typedef struct tm* TIMTypedefHandler;
/* END USER CODE PD */

// private macro
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable
/* BEGIN USER CODE PV */
char buffer[100];
time_t now;
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function
/* BEGIN USER CODE PF */
void delay(int milisecond)
{
    clock_t start = clock();
    while(clock() < start + milisecond);
}
/* END USER CODE PF */

/* BEGIN USER CODE 1 */
/* END USER CODE 1 */

int main()
{
	/* BEGIN USER CODE 2 */
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		/* BEGIN USER CODE 3 */
		time(&now);
		TIMTypedefHandler tim1 = (TIMTypedefHandler)localtime(&now);
		printf("Current time: %d:%d:%d.\n", tim1->tm_hour, tim1->tm_min, tim1->tm_sec);
		delay(1000);
	}
	/* END USER CODE 3 */
	return 0;
}
