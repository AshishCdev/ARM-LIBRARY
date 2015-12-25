#include <TM4C123GH6PM.h>

void PORTF_init(void){
		volatile uint32_t delay=0;		// 	Declaring  dummy bit for waiting after enabling clock  
		SYSCTL->RCGC2=0x00000020; 	//	Clock for the PORTF
		delay=SYSCTL->RCGC2;		//	waiting after enabling the clock
		GPIOF->LOCK=0x4C4F434B;		//	writing the magic number to LOCK register	
		GPIOF->CR=0x1F;			//	Allowing changes for bits PF0 to PF4 
		GPIOF->DIR=0x0E;			//	Setting the direction IO pins
		GPIOF->PUR=0x11;			//	Enabling the pull-up register for PF0 and PF4
		GPIOF->DEN=0x1F;			//	Enabling digital pins from 0 to 4
}
