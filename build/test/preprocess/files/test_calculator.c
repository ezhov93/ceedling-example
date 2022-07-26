#include "mock_button.h"
#include "/usr/local/bundle/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "src/calculator.h"










void __attribute__((weak)) setUp() {

 Calculator_init();}

void __attribute__((weak)) tearDown() {}





void test_TestCalculator_Add_() {

  int i = Calculator_sum(10, 5);

  UnityAssertEqualNumber((UNITY_INT)((15)), (UNITY_INT)((i)), (

 ((void*)0)

 ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

}



void test_TestCalculator_SubstractDefault_() {



  Button_isPressed_CMockExpectAndReturn(21, 0);

  int i = Calculator_substract(10, 5);

  UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((i)), (

 ((void*)0)

 ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);



}



void test_TestCalculator_SubstractButtonPresed_() {



  Button_isPressed_CMockExpectAndReturn(29, 1);

  int i = Calculator_substract(10, 5);

  UnityAssertEqualNumber((UNITY_INT)((-5)), (UNITY_INT)((i)), (

 ((void*)0)

 ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);



}
