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
int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function
/* BEGIN USER CODE PF */
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void delay(int milisecond)
{
    clock_t start = clock();
    while(clock() < start + milisecond);
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
/* END USER CODE PF */

/* BEGIN USER CODE 1 */
/* END USER CODE 1 */

int main()
{
	/* BEGIN USER CODE 2 */
	srand(time(0));
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		/* BEGIN USER CODE 3 */
		printf("Begin!!!!\n");
		for(int i = 0; i < 10; ++i)
        {
            a[i] = rand() % 50 + 1;
            printf("%d\t", a[i]);
        }
        printf("\n");

        printf("Start sorting!\n");
        delay(1000);

        quickSort(a, 0, 9);
        for(int i = 0; i < 10; ++i)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");

        printf("End!!!!\n");
        delay(3000);
	}
	/* END USER CODE 3 */
}
