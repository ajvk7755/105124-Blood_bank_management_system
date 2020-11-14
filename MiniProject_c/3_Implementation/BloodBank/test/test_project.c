#include "unity.h"
#include "my_project.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_list(void)
{
  TEST_ASSERT_EQUAL(3, list_of_donor());
}

void test_srch_donor(void)
{
  TEST_ASSERT_EQUAL(1, search_donor("o+ve"));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
/* Run Test functions */
  RUN_TEST(test_list);
  RUN_TEST(test_srch_donor);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
