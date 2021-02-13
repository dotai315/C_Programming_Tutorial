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
	FILE* fp;
	fp = fopen("D:\\GIT_WORKSPACE\\C_Programming_Tutorial\\File\\read_1_character\\fgetc\\abc.txt", "r");

	if(fp == NULL)
    {
        printf("no such file\n");
        return 1;
    }
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		char c = fgetc(fp);
		if(feof(fp))
        {
            break;
        }
		/* BEGIN USER CODE 3 */
		printf("%c", c);
	}
	/* END USER CODE 3 */
	fclose(fp);
	return 0;
}
