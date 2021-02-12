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
int* ptr_a;
int a;
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
	a = 1;
	ptr_a = &a;
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		if(*ptr_a == 0)
        {
            break;
        }
		/* BEGIN USER CODE 3 */
		printf("Enter your number: ");
		scanf("%d", ptr_a);
		printf("Your entered: %d\n", *ptr_a);
	}
	/* END USER CODE 3 */
	getchar();
	getchar();
	return 0;
}
