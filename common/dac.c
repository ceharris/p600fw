////////////////////////////////////////////////////////////////////////////////
// DAC chip
////////////////////////////////////////////////////////////////////////////////

#include "dac.h"

void dac_write(uint16_t value)
{
	uint16_t w;
	
	w=value>>2;
	
	mem_write(0x4000,w);
	mem_write(0x4001,w>>8);
}