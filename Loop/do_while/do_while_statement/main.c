#include <stdio.h>
#include <stdlib.h>

// private include
/* BEGIN USER CODE PI */
/* END USER CODE PI */

// private define
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable
/* BEGIN USER CODE PV */
int state = 0;
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function
/* BEGIN USER CODE PF */
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
		do
        {
            printf("Enter your number: ");
            scanf("%d", &state);
            if(state == -1)
            {
                goto Exit;
            }
            else if(state > 0)
            {
                break;
            }
        } while(state == 0);
		/* BEGIN USER CODE 3 */
		printf("Hello World!\n");
		for (int c = 1; c <= 32767; c++)
            for (int d = 1; d <= 32767; d++);
        printf("My name is Do Huu Tai\n");
        for (int c = 1; c <= 32767; c++)
            for (int d = 1; d <= 32767; d++);
	}
	/* END USER CODE 3 */
	Exit:
	    getchar();
	    getchar();
    return 0;
}
