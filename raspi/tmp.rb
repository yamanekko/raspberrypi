GC.interval_ratio = 20
GC.step_ratio = 200

def delay(n)
  n.times do
  end
end

  green = Led.new(Led::GREEN)
  orange = Led.new(Led::ORANGE)
  red = Led.new(Led::RED)
  blue = Led.new(Led::BLUE)

loop do

  green.on

  delay 0x3FFF

  orange.on

  delay 0x3FFF

  red.on

  delay 0x3FFF

  blue.on

  delay 0x3FFF

  green.off
  orange.off
  red.off
  blue.off

  delay 0xFFFF

  GC.start
end

