#include <iostream>
#include <fstream>

using namespace std;

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
	string str;

	ofstream a_file("example.txt");
	a_file << "This text will now be inside of example.txt";
	a_file.close();

	ifstream b_file("example.txt");
	while(getline(b_file, str))
    {
        cout << str;
    }
    b_file.close();
	/* END USER CODE 2 */
	//while(1)
	//{
		/* END USER CODE LOOP */
		/* BEGIN USER CODE 3 */
	//}
	/* END USER CODE 3 */
	cin.get();
}

