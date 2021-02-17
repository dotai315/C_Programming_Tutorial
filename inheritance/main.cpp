#include <iostream>

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

// private namespace
/* BEGIN USER CODE PN */
/* END USER CODE PN */

// private class
/* BEGIN USER CODE PC */
enum GPIO_PIN_STATE
{
    GPIO_PIN_RESET,
    GPIO_PIN_SET
};

class GPIOx
{
protected:
    int data[8];
public:
    GPIOx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
    ~GPIOx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
    void printData()
    {
        for(int i = 0; i < 8; ++i)
        {
            cout << this->data[i] << "\t";
        }
        cout << "\n";
    }
    void setGPIO(int pinNumber, int GPIO_PIN_State)
    {
        if(pinNumber >= 8 || pinNumber < 0)
        {
            return;
        }
        this->data[pinNumber] = GPIO_PIN_State;
    }
    int getGPIO(int pinNumber)
    {
        if(pinNumber >= 8 || pinNumber < 0)
        {
            return 0;
        }
        return this->data[pinNumber];
    }
};

class PORTx: public GPIOx
{
public:
    PORTx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
    ~PORTx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
};

class DDRx: public GPIOx
{
public:
    DDRx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
    ~DDRx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
};

class PINx: public GPIOx
{
public:
    PINx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
    ~PINx()
    {
        for(int i = 0; i < 8; ++i)
        {
            this->data[i] = 0;
        }
    }
};
/* END USER CODE PC */

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
	/* END USER CODE 2 */
	while(1)
	{
		/* END USER CODE LOOP */
		/* BEGIN USER CODE 3 */
	}
	/* END USER CODE 3 */
}

