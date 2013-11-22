
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

/* <ruby->
  checked = @rs_timer.check
  case @flg2
  when 0
    @green.toggle
    @flg2 = 1
  when 1
    @orange.toggle
    @flg2 = 2
  when 2
    @red.toggle
    @flg2 = 3
  when 3
    @blue.toggle
    @flg2 = 0
  end
  GC.start
<-ruby> */

	}

int main( void )
{

    mrb = mrb_open();
	if (mrb == NULL) {
		return 0;
	}

 /* <ruby->

  GC.interval_ratio = 20
  GC.step_ratio = 200

  @red = Led.new(Led::RED)
  @blue = Led.new(Led::BLUE)
  @green = Led.new(Led::GREEN)
  @orange = Led.new(Led::ORANGE)
  @rs_timer = RsTimer.new
  @rs_timer.interval(1000)
  @rs_timer.enable
  @flg2 = 0

<-ruby> */

    while(1) continue;

    mrb_close(mrb);

    return(0);

}
