

// led toggling using registers
/*
 * Application:Led toggling
 *
 * GPIO'S
 * STEP1:Enable the AHB1 by RCC register - port address
 * STEP2:Enable the GPIOX_MODER - mode of operation
 * STEP3:Enable the GPIO_ODR for output -PIN selection
 * Author:
 */



#include<main.h>
void delay(int t)
{
	int i;
	while(t--)
		{
		for(i=0;i<4000;i++);
		}
		}
int main ()
{
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0X400;
	while(1)
	{

	GPIOA->ODR |= 0x20;
	delay(1000);
	GPIOA->ODR &= ~(0x20);
	delay(1000);
	}

	}
