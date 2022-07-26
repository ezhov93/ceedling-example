#ifndef CALCULATOR_H
#define CALCULATOR_H

void Calculator_init();
static inline int Calculator_sum(int a, int b) { return a + b; }
int Calculator_substract(int a, int b);

#endif  // CALCULATOR_H