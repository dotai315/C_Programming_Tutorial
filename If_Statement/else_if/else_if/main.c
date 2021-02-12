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
int state = 999;
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
		if(state == 0)
        {
            break;
        }
        else if(state == 1)
        {
            goto ELSEIF;
        }
        else
        {
            goto MainProgram;
        }
		/* BEGIN USER CODE 3 */
		MainProgram:
		    printf("Enter your number: ");
		    scanf("%d", &state);
		    printf("Your entered: %d\n", state);
		    continue;
        ELSEIF:
            printf("Hello World!\n");
            scanf("%d", &state);
	}
	/* END USER CODE 3 */
	getchar();
	getchar();
	return 0;
}
