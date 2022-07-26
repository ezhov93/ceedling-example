#include "calculator.h"
#include "button.h"

void Calculator_init() {
	Button_init();
}

int Calculator_substract(int a, int b) {
  if (Button_isPressed() == 1)
    return b - a;
  else
    return a - b;
}