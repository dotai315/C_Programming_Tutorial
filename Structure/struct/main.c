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
struct Time
{
    int hour;
    int minute;
    int second;
};

struct Time tim1 = {0, 0, 0};
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
		time_t now = time(NULL);
        struct tm* tm_struct = localtime(&now);
		tim1.hour = tm_struct->tm_hour;
		tim1.minute = tm_struct->tm_min;
		tim1.second = tm_struct->tm_sec;
		printf("Current time: %d:%d:%d\n", tim1.hour, tim1.minute, tim1.second);
		delay(1000);
	}
	/* END USER CODE 3 */
	getchar();
	return 0;
}
