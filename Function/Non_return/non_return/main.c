#include <stdio.h>
#include <stdlib.h>

// private include
/* BEGIN USER CODE PI */
#include <time.h>
/* END USER CODE PI */

// private define
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable
/* BEGIN USER CODE PV */
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function
/* BEGIN USER CODE PF */
void delay(int miliseconds)
{
    clock_t startTime = clock();
    while(clock() < startTime + miliseconds);
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
		printf("Hello World!\n");
		delay(1000);
		printf("I come from Viet Nam\n");
		delay(1000);
	}
	/* END USER CODE 3 */
}

