#include <stdio.h>

class kitty {
 public:
  kitty();
  ~kitty();

  static kitty m();

  void speak();  
  void speak2(){ printf("totes works\n"); }

};