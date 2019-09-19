#include <Arduino.h>
#include <IRremote.h>
#include <Getinscar.h>
class IRcar{
  private:
    int in1, in2, in3, in4, in5;
  public:
 	IRcar(int in1, int in2, int in3, int in4,int in5);
 	void caidat();
  static uint32_t nhantinhieu();
 	void retrai();
 	void rephai();
  void dithang();
 	void lui();
};
