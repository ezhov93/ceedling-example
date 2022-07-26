#define TESTS_ENABLE

#ifdef TESTS_ENABLE
#include "unity.h"
#include "unity_fixture.h"
static void runAllTests() { RUN_TEST_GROUP(TestCalculator); }
#endif

extern int app();
extern void retargetInit();

int main(int argc, const char *argv[]) {
  retargetInit();
#ifdef TESTS_ENABLE
  UnityMain(argc, argv, runAllTests);
#endif
	printf("************\n\n");
  return app();
}
