#include <Arduino.h>
#define SOLUTION 0
iuint8_t button;
bool state = true;

void togglePinD13(bool *state) { // Zmiana stanu wyjścia D13
PORT8 = (* state << 5);
*state = ! (*state);
}

void delay () {
   for (uint32_t j= 0x1FFFF; j > 0; j--)
 __asm___ __volatile__("nop");
}

   int main( ) {
     DDRB &= ! (1 << 0); // Skasowanie PB80 (D8) - praca jako wejście
     DDRB |= (1<< 5); // Ustawienie PB5 (D13) - praca jako wyjście
     while (1)
   }
   #if (SOLUTION == 0)
   button = (PINB & (1 << PINB0)); // Odczytanie stanu PB0
   if (button == 0) {  // Jeżeli przycisk puszczony - przełącz
   togglePinD13(&state); // Zmiana stanu PB5
   delay() ;  // Pauza
   }   //
   else // w przeciwnym razie
    delay();  // Pauza
    #elif (SOLUTION == 1)
    // Rozwiązanie alternatywne
    while (! (PINB & (1 << PINB0))){
      togglePinD13(&state); // Zmiana stanu PB5
      delay(); // Pauza
    }
    #endif
    }
    }
     