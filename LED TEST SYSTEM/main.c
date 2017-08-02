#include "main.h"

// Global Varibles
int exit_val;
int _cnt;

/* Prototypes */
void setup();
void loop();
void led();

int main(int argc, char *argv[])
{
    exit_val = 0;
	_cnt = -1;
	
	for(int i = 0; i < argc; i++)
	{
		if( i == 1)
			_cnt = atoi(argv[i]);
	}
	fflush(NULL);
	
	setup();
	
	if (!exit_val)
	{
		do
		{	
			loop();
			
			if(!_cnt)
			{
				exit_val = 1;
			}
			else if (_cnt > 0)
			{
				_cnt--;
				
				system("clear");
				for(int i = 0; i < argc; i++)
				{
					printf("argv[%d]: %s\n", i, argv[i]);
				}
				printf(" %d ", _cnt);
				fflush(NULL);
			}
				
		} while(!exit_val); 
		
		bcm2835_close();
	}
	
	printf("\n");
	fflush(NULL);
	
	return exit_val;
}

// Blinks a RPI B+ GPIO J8 Pin 11 
// ( which is GPIO Pin 17)
#define LED_1 RPI_BPLUS_GPIO_J8_11
// ( which is GPIO Pin 19)
#define LED_2 RPI_BPLUS_GPIO_J8_35

void setup()
{
	if (!bcm2835_init())
	{
		exit_val = 1;
	}
	
	//
	bcm2835_gpio_fsel(LED_1, BCM2835_GPIO_FSEL_OUTP);
	
	//
	bcm2835_gpio_fsel(LED_2, BCM2835_GPIO_FSEL_OUTP);
	
}

void loop()
{
	led();
}

void led()
{
	bcm2835_gpio_write(LED_1, HIGH);
	bcm2835_gpio_write(LED_2, LOW);
	bcm2835_delay(125);
	
	
	bcm2835_gpio_write(LED_1, LOW);
	bcm2835_gpio_write(LED_2, HIGH);
	bcm2835_delay(125);
}
