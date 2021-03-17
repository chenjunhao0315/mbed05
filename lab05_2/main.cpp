#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{
    uLCD.background_color(WHITE);
    ThisThread::sleep_for(1s);
    uLCD.color(BLUE);
    uLCD.locate(0, 0);
    uLCD.printf("108061151");
    uLCD.color(GREEN);
    for (int i = 30; i >= 0; i--) {
        uLCD.locate(0, 1);
        uLCD.printf("%d", i);
        ThisThread::sleep_for(1s);
    }
}