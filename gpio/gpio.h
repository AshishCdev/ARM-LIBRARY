
#ifndef gpio_H_
#define gpio_H_

/* It is always best practice to define some macros for the signals*/
#define 			SW1						(GPIOF->DATA&(1<<4))
#define				SW2						(GPIOF->DATA&(1<<0))
#define				red						(GPIOF->DATA=0x02)
#define				blue					(GPIOF->DATA=0x04)
#define				green 				(GPIOF->DATA=0x08)
#define				white					(GPIOF->DATA=0x0E)
#define				Dark					(GPIOF->DATA=0x00)
#define				Yellow				(GPIOF->DATA=0x0A)
#define				Sky_blue			(GPIOF->DATA=0x0C)

void PORTF_init(void);

#endif /* INCFILE1_H_ */
