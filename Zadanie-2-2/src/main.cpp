#include <avr/io.h>

int main()
{
  uint32_t  i;

DDRB  |= (1 << 5); // pinMode (13, OUTPUT);
while (1)
{
 PORTB  |= (1 << 5); // digitalWrite( 13, HIGH);
i = 0x3FFFF;
do
{
  __asm__  __ volatille __ ( "nop" );
} while (i--);
PORTB &=  ! (1 << 5); // digitalWrite (13, LOW);
i = 0x3FFFF;
do
{
__ asm ____ volatile __("nop");;
} while (i--);
}
}

