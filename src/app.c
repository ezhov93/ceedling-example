#include "calculator.h"
#include <stdio.h>
#include <stm32f10x.h>

int app() {
  int value;
	Calculator_init();
  for (;;) {
    value = Calculator_substract(50, 10);
    printf("%d\n", value);
		for(int i=0; i<1000000; i++) __NOP();
  }
}