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
char buf[] = "Hello World!!!";
char receive_str[100];
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
	fp = fopen("D:\\GIT_WORKSPACE\\C_Programming_Tutorial\\File\\write_1_character\\test.txt", "w");

	if(fp == NULL)
    {
        printf("No such file\n");
        return 1;
    }

    for(int i = 0; buf[i] != '\0'; ++i)
    {
        fputc(buf[i], fp);
    }
    fclose(fp);
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		break;
		/* BEGIN USER CODE 3 */
	}
	/* END USER CODE 3 */
	return 0;
}

