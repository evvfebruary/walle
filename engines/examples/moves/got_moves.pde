#include <Engines.h>
Engines my_engine = Engines(9, 8, 10, 11); // Initialize with your own pins, fellows
void setup(){
}

void loop(){
  my_engine.move_forward();
  // my_engine.move_back();
  // my_engine.move_right;
  // my_engine.move_left();
  delay(1000);
  my_engine.stop()

}
