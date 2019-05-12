#include <stdio.h>
#include "example.h"

kitty::kitty(){
  printf("Constructor\n");
}

kitty::~kitty(){
  printf("Destructor\n");
}

void kitty::speak(){
  printf("I'm a cat.\n");
}

kitty kitty::m(){
  printf("mmmmm\n");
  return kitty();
}