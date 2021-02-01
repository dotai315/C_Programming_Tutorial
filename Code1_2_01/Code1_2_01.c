#include <stdio.h>
// private include 
/* BEGIN USER CODE PI */
#include <Windows.h>
#include <conio.h>
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
int count = 0;
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function 
/* BEGIN USER CODE PF */
void delay(int delayPeriod)
{
    for(int i = 0; i < delayPeriod; ++i)
    {
        for(int j = 0; j < 1275; ++j)
        {
            
        }
    }
}
/* END USER CODE PF */

/* BEGIN USER CODE 1 */
/* END USER CODE 1 */

int main()
{
    /* BEGIN USER CODE 2 */
    /* END USER CODE 2 */

    /* Initial programming */

    while(1)
    {
        /* END USER CODE LOOP */
        if(_kbhit())
        {
            int key = _getch();
            if(key == 27)
            {
                break;
            }
        }
        /* BEGIN USER CODE 3 */
        printf("My name is Do Huu Tai\n");
        delay(1000);
        printf("My love is Nguyen Thao Ngoc Doan\n");
        delay(1000);
        count++;
        printf("The count of program: %d\n", count);
        delay(1000);
    }

    printf("Thanks for using!\n");
    getchar();
    return 0;
}
/* END USER CODE 3 */