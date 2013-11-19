
#include "mruby.h"
#include "mruby/proc.h"
#include "mruby/data.h"
#include "mruby/compile.h"
#include "mruby/string.h"
#include "mruby/numeric.h"
#include <math.h>
#include <stdlib.h>

mrb_state *mrb;

void TIM2_IRQHandler ( void )
{

#include <stdint.h>
const uint8_t code0[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x31,0x3e,0xe1,0x00,0x00,0x01,0x58,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x01,0x3a,0x30,0x30,
0x30,0x30,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x2a,0x00,0x02,0x00,0x04,0x00,0x00,
0x00,0x2f,0x01,0x00,0x00,0x0d,0x01,0x00,0x40,0x20,0x00,0x80,0x80,0x01,0x01,0x00,
0x01,0x0d,0x01,0xbf,0xff,0x83,0x02,0x00,0x80,0x01,0x01,0x80,0xc0,0xa0,0x01,0xc0,
0x00,0x98,0x00,0x40,0x02,0x97,0x01,0x80,0x02,0x0d,0x01,0x81,0x40,0x20,0x01,0xc0,
0x00,0x03,0x01,0x80,0x01,0x0e,0x00,0x40,0x0f,0x17,0x01,0xc0,0x00,0x03,0x02,0x00,
0x80,0x01,0x01,0x80,0xc0,0xa0,0x01,0xc0,0x00,0x98,0x00,0x40,0x02,0x97,0x01,0x80,
0x03,0x0d,0x01,0x81,0x40,0x20,0x01,0xc0,0x00,0x83,0x01,0x80,0x01,0x0e,0x00,0x40,
0x0a,0x17,0x01,0xc0,0x00,0x83,0x02,0x00,0x80,0x01,0x01,0x80,0xc0,0xa0,0x01,0xc0,
0x00,0x98,0x00,0x40,0x02,0x97,0x01,0x80,0x03,0x8d,0x01,0x81,0x40,0x20,0x01,0xc0,
0x01,0x03,0x01,0x80,0x01,0x0e,0x00,0x40,0x05,0x17,0x01,0xc0,0x01,0x03,0x02,0x00,
0x80,0x01,0x01,0x80,0xc0,0xa0,0x01,0xc0,0x00,0x98,0x00,0x40,0x02,0x97,0x01,0x80,
0x04,0x0d,0x01,0x81,0x40,0x20,0x01,0xbf,0xff,0x83,0x01,0x80,0x01,0x0e,0x00,0x40,
0x00,0x17,0x01,0x80,0x04,0x91,0x01,0x82,0x80,0x20,0x00,0x00,0x00,0x4a,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0b,0x00,0x09,0x40,0x72,0x73,0x5f,0x74,0x69,0x6d,0x65,
0x72,0x00,0x00,0x05,0x63,0x68,0x65,0x63,0x6b,0x00,0x00,0x05,0x40,0x66,0x6c,0x67,
0x32,0x00,0x00,0x03,0x3d,0x3d,0x3d,0x00,0x00,0x06,0x40,0x67,0x72,0x65,0x65,0x6e,
0x00,0x00,0x06,0x74,0x6f,0x67,0x67,0x6c,0x65,0x00,0x00,0x07,0x40,0x6f,0x72,0x61,
0x6e,0x67,0x65,0x00,0x00,0x04,0x40,0x72,0x65,0x64,0x00,0x00,0x05,0x40,0x62,0x6c,
0x75,0x65,0x00,0x00,0x02,0x47,0x43,0x00,0x00,0x05,0x73,0x74,0x61,0x72,0x74,0x00,
0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};
mrb_value return_value0;
return_value0 = mrb_load_irep(mrb, code0);

	}

int main( void )
{

    mrb = mrb_open();
	if (mrb == NULL) {
		return 0;
	}

#include <stdint.h>
const uint8_t code1[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x31,0xed,0x4d,0x00,0x00,0x01,0x81,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x01,0x63,0x30,0x30,
0x30,0x30,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x53,0x00,0x01,0x00,0x04,0x00,0x00,
0x00,0x27,0x00,0xc0,0x09,0x83,0x01,0x00,0x00,0x11,0x01,0x80,0x40,0x01,0x01,0x00,
0x40,0xa0,0x00,0xc0,0x63,0x83,0x01,0x00,0x00,0x11,0x01,0x80,0x40,0x01,0x01,0x00,
0x80,0xa0,0x00,0x80,0x01,0x91,0x01,0x00,0x01,0x91,0x01,0x00,0x02,0x93,0x00,0x81,
0x00,0xa0,0x00,0x80,0x03,0x0e,0x00,0x80,0x01,0x91,0x01,0x00,0x01,0x91,0x01,0x00,
0x03,0x93,0x00,0x81,0x00,0xa0,0x00,0x80,0x04,0x0e,0x00,0x80,0x01,0x91,0x01,0x00,
0x01,0x91,0x01,0x00,0x04,0x93,0x00,0x81,0x00,0xa0,0x00,0x80,0x05,0x0e,0x00,0x80,
0x01,0x91,0x01,0x00,0x01,0x91,0x01,0x00,0x05,0x93,0x00,0x81,0x00,0xa0,0x00,0x80,
0x06,0x0e,0x00,0x80,0x06,0x91,0x00,0x81,0x00,0x20,0x00,0x80,0x07,0x0e,0x00,0x80,
0x07,0x0d,0x01,0x41,0xf3,0x83,0x00,0x83,0xc0,0xa0,0x00,0x80,0x07,0x0d,0x00,0x84,
0x00,0x20,0x00,0xbf,0xff,0x83,0x00,0x80,0x08,0x8e,0x00,0x00,0x00,0x4a,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x12,0x00,0x02,0x47,0x43,0x00,0x00,0x0f,0x69,0x6e,0x74,
0x65,0x72,0x76,0x61,0x6c,0x5f,0x72,0x61,0x74,0x69,0x6f,0x3d,0x00,0x00,0x0b,0x73,
0x74,0x65,0x70,0x5f,0x72,0x61,0x74,0x69,0x6f,0x3d,0x00,0x00,0x03,0x4c,0x65,0x64,
0x00,0x00,0x03,0x6e,0x65,0x77,0x00,0x00,0x03,0x52,0x45,0x44,0x00,0x00,0x04,0x40,
0x72,0x65,0x64,0x00,0x00,0x04,0x42,0x4c,0x55,0x45,0x00,0x00,0x05,0x40,0x62,0x6c,
0x75,0x65,0x00,0x00,0x05,0x47,0x52,0x45,0x45,0x4e,0x00,0x00,0x06,0x40,0x67,0x72,
0x65,0x65,0x6e,0x00,0x00,0x06,0x4f,0x52,0x41,0x4e,0x47,0x45,0x00,0x00,0x07,0x40,
0x6f,0x72,0x61,0x6e,0x67,0x65,0x00,0x00,0x07,0x52,0x73,0x54,0x69,0x6d,0x65,0x72,
0x00,0x00,0x09,0x40,0x72,0x73,0x5f,0x74,0x69,0x6d,0x65,0x72,0x00,0x00,0x08,0x69,
0x6e,0x74,0x65,0x72,0x76,0x61,0x6c,0x00,0x00,0x06,0x65,0x6e,0x61,0x62,0x6c,0x65,
0x00,0x00,0x05,0x40,0x66,0x6c,0x67,0x32,0x00,0x45,0x4e,0x44,0x00,0x00,0x00,0x00,
0x08,
};
mrb_value return_value1;
return_value1 = mrb_load_irep(mrb, code1);

    while(1) continue;

    mrb_close(mrb);

    return(0);

}