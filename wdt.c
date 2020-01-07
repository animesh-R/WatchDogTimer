#include<lpc21xx.h>

void pll_clk(int val)
{
	
PLLCON=0X01;
PLLCFG=0X25;
PLLFEED=0XAA;
PLLFEED=0X55;

while(!(PLLSTAT&(1<<10)));

PLLCON=0X03;
PLLFEED=0XAA;
PLLFEED=0X55;
	
	VPBDIV=0x00;
	
}


void main()
{
	
	while(1)
	{
		WDTV=0X0000;
		WDTC=0XFFFF;
		
		WDMOD=(1<<0)|(1<<1);
		
WDFEED=0XAA;
		WDFEED=0X55;
		
		while(!(WDMOD&(1<<2)));
	}
}
