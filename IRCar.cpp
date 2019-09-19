#include "IRCar.h"

IRcar::IRcar(int in1, int in2, int in3, int in4, int in5):in1(in1), in2(in2), in3(in3), in4(in4), in5(in5)  {}
void IRcar::caidat(){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}
static uint32_t IRcar::nhantinhieu(){
  IRrecv irrecv(in5);
  decode_results results;
  irrecv.enableIRIn();   
  if (irrecv.decode(&results)) {
    return results.value;
    irrecv.resume(); // Receive the next value
}
void IRcar::retrai(){
  RCcar RCcar1(in4, in3, in2, in1);
  //RCcar1.init();
  RCcar1.setSpeed(0,250);delay(100);
  RCcar1.setSpeed(0,0);
}
void IRcar::rephai(){
  RCcar RCcar1(in4, in3, in2, in1);
  //RCcar1.init();
  RCcar1.setSpeed(250,0);delay(100);
  RCcar1.setSpeed(0,0);
}
void IRcar::dithang()
{
  RCcar RCcar1(in4, in3, in2, in1);
  //RCcar1.init();
  RCcar1.setSpeed(250,250);delay(100);
  RCcar1.setSpeed(0,0);
}
void IRcar::lui()
{
  RCcar RCcar1(in4, in3, in2, in1);
  //RCcar1.init();
  RCcar1.setSpeed(-250,-250);delay(100);
  RCcar1.setSpeed(0,0);
}
