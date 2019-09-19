#include <IRremote.h>
#include "IRCar.h"

//////////////////////////////////////
#define In1  9
#define In2  8
#define In3  7
#define In4  6
#define RECV_PIN 10
IRcar IRcar1(In4, In3, In2, In1,RECV_PIN);
/////////////////////////////////////
void setup() {
    IRcar1.caidat();
}
////////////////////////////////////
void loop() {
    switch (IRcar1.nhantinhieu())
    { case 0xFF18E7: {IRcar1.dithang;break;}
      case 0xFF4AB5: {IRcar1.lui;break;}
      case 0xFF10EF: {IRcar1.retrai;break;}
      case 0xFF5AA5: {IRcar1.rephai;break;}
    }
  delay(10);
}
