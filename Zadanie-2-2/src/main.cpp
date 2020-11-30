#include <avr/ io.h>
#define LED_LENGTH 8

int main ()
{
DDRD |= 0xFF; // Ustawiamy wsystkie wyprowadzenia portu D jako wyjścia
while (1)
{ / / Kierunke D0 - > D7
for (uint8_t i=0; i < LED LENGTH; i++)
{
PORTD = (1 << i);
for (uint32_t j= 0X1FFFF; j > 0; j --)
{
__asm__-__ volatille__ ("nop");
}
/ / Kierunek D6 -> D1
for (uint8_t i = 1; i < ( LED_LENGTH - 1); I ++)
{
PORTD = (PORTD >> 1);
for  (uint32_2 j= 0x1FFFF; j > 0; j--)
{
__asm__-__ volatile__ ("nop");
}
}
}
}