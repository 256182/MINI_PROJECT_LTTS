#include "unity.h"
#include "snooker.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "SNOOKER"

/* Prototypes for all the test functions */
void test_yellow(void);
void test_green(void);
void test_brown(void);
void test_blue(void);
void test_pink(void);
void test_black(void);
void test_red(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_yellow);
  RUN_TEST(test_green);
  RUN_TEST(test_brown);
  RUN_TEST(test_blue);
  RUN_TEST(test_pink);
  RUN_TEST(test_yellow);
  RUN_TEST(test_black);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_yellow(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2, yellow(&val3));
  TEST_ASSERT_EQUAL(-2, yellow(&val4));
  TEST_ASSERT_EQUAL(2, yellow(&val1));
  TEST_ASSERT_EQUAL(2, yellow(&val2));
}
void test_green(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2, green(&val3));
  TEST_ASSERT_EQUAL(-2, green(&val4));
  TEST_ASSERT_EQUAL(3, green(&val1));
  TEST_ASSERT_EQUAL(3, green(&val2));
}
void test_brown(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2, brown(&val3));
  TEST_ASSERT_EQUAL(-2, brown(&val4));
  TEST_ASSERT_EQUAL(4, brown(&val1));
  TEST_ASSERT_EQUAL(4, brown(&val2));
}
void test_blue(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2, blue(&val3));
  TEST_ASSERT_EQUAL(-2, blue(&val4));
  TEST_ASSERT_EQUAL(5, blue(&val1));
  TEST_ASSERT_EQUAL(5, blue(&val2));
}
void test_pink(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2,pink(&val3));
  TEST_ASSERT_EQUAL(-2, pink(&val4));
  TEST_ASSERT_EQUAL(6, pink(&val1));
  TEST_ASSERT_EQUAL(6, pink(&val2));
}
void test_black(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2, black(&val3));
  TEST_ASSERT_EQUAL(-2, black(&val4));
  TEST_ASSERT_EQUAL(7, black(&val1));
  TEST_ASSERT_EQUAL(7, black(&val2));
}
void test_red(void){
  players_t val1={0,1};
  players_t val2={1,0};
  players_t val3={0,0};
  players_t val4={1,1};
  TEST_ASSERT_EQUAL(-2, red(&val3));
  TEST_ASSERT_EQUAL(-2, red(&val4));
  TEST_ASSERT_EQUAL(1, red(&val1));
  TEST_ASSERT_EQUAL(1, red(&val2));
}

