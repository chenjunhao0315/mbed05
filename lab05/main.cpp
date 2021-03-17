#include "mbed.h"

#include "TextLCD.h"


TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7


int main()

{
      lcd.printf("108061151\n");
      for (int x = 30; x >= 0; x--) {
            lcd.locate(1, 1);
            lcd.printf("%d", x);
            ThisThread::sleep_for(1s);
      }

}