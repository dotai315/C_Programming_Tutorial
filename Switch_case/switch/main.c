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
int state = 0;
int num = 0;
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function
/* BEGIN USER CODE PF */
int reverseNum(int num)
{
    int temp = 0;
    while(num != 0)
    {
        temp *= 10;
        temp += num % 10;
        num /= 10;
    }
    return temp;
}

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
	printf("Enter your state: ");
	scanf("%d", &state);
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		switch(state)
		{
        case 0:
            goto Exit;
        case 1:
            printf("Enter your number: ");
            scanf("%d", &num);
            printf("Reverse your number: %d\n", reverseNum(num));
            break;
        case 2:
            printf("Hello ");
            delay(2000);
            printf("World\n");
            delay(2000);
            break;
        case 3:
            printf("Enter your number: ");
            scanf("%d", &num);
            for(int i = 0; i < num; ++i)
            {
                printf("%d\t", i);
            }
            printf("\n");
            break;
        default:
            break;
		}
		printf("Enter your state: ");
        scanf("%d", &state);
		/* BEGIN USER CODE 3 */
	}
	/* END USER CODE 3 */
	Exit:
	    getchar();
	    getchar();
	    return 0;
}
