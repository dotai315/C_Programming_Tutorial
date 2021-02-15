#include <iostream>



// private include
/* BEGIN USER CODE PI */
#include <ctime>
/* END USER CODE PI */

using namespace std;
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
class Computer
{
public:
    Computer();
    ~Computer();
    void print();
    bool delay(int milisecond);
};

Computer::Computer()
{

}

Computer::~Computer()
{

}

bool Computer::delay(int milisecond)
{
    clock_t start = clock();
    while(clock() < start + milisecond);
}

void Computer::print()
{
    cout << "Hello ";
    this->delay(1000);
    cout << "World\n";
    this->delay(1000);
}
/* END USER CODE 1 */

int main()
{
	/* BEGIN USER CODE 2 */
	Computer a;
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		/* BEGIN USER CODE 3 */
		a.print();
	}
	/* END USER CODE 3 */
}

