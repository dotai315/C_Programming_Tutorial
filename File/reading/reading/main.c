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
	fp = fopen("D:\\GIT_WORKSPACE\\C_Programming_Tutorial\\File\\reading\\abc.txt", "r");
	if (fp == NULL)
    {
        printf("no such file.");
        return 1;
    }

    char name[10], age[10], city[10];

    rewind(fp);
	while (fscanf(fp,"%s %s %s",name, age, city) != EOF)
	{
	    printf("%s %s %s\n",name, age, city);
	}
	fclose(fp);
	/* END USER CODE 2 */
	//while(1)
	//{
		/* END USER CODE LOOP */
		/* BEGIN USER CODE 3 */
	//}
	/* END USER CODE 3 */
	return 0;
}

