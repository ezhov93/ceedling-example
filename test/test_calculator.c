#include "calculator.h"
#include "unity.h"

#ifdef USE_CEEDLING_MOCK
#include "mock_button.h"
#endif

#ifdef USE_CEEDLING
void __attribute__((weak)) setUp() {
 Calculator_init();}
void __attribute__((weak)) tearDown() {}
#endif

void test_TestCalculator_Add_() {
  int i = Calculator_sum(10, 5);
  TEST_ASSERT_EQUAL_INT(15, i);
}

void test_TestCalculator_SubstractDefault_() {
#ifdef USE_CEEDLING_MOCK
  Button_isPressed_ExpectAndReturn(0);
  int i = Calculator_substract(10, 5);
  TEST_ASSERT_EQUAL_INT(5, i);
#endif
}

void test_TestCalculator_SubstractButtonPresed_() {
#ifdef USE_CEEDLING_MOCK
  Button_isPressed_ExpectAndReturn(1);
  int i = Calculator_substract(10, 5);
  TEST_ASSERT_EQUAL_INT(-5, i);
#endif
}

#ifndef USE_CEEDLING
#include "unity_fixture.h"

TEST_GROUP(TestCalculator);

TEST_SETUP(TestCalculator) {Calculator_init();}

TEST_TEAR_DOWN(TestCalculator) {}

TEST_GROUP_RUNNER(TestCalculator) {
  RUN_TEST_CASE(TestCalculator, Add);
  RUN_TEST_CASE(TestCalculator, SubstractDefault);
  RUN_TEST_CASE(TestCalculator, SubstractButtonPresed);
}

TEST(TestCalculator, Add) { test_TestCalculator_Add_(); }

TEST(TestCalculator, SubstractDefault) {
  test_TestCalculator_SubstractDefault_();
}

TEST(TestCalculator, SubstractButtonPresed) {
  test_TestCalculator_SubstractButtonPresed_();
}

#endif