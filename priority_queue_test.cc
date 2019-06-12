#include "priority_queue.h"
#include <gtest/gtest.h>

// TEST(testCaseName, testName){
//   ... test body ...
// }


TEST(PriorityQueueTest,Trivial){
templatePriorityQueue<int> expTarget;

  int array_size = 6;
  int pop_test_count = 3;
  int test_data[] = {1, 4, 2, 3, 8, 5};

  //Test 1 - Initalize
  ASSERT_TRUE(expTarget.empty()); // empty test

  //Test 2 - Push Datas and Top size
  for (int i = 0; i < array_size; i++)
  {
    expTarget.push(test_data[i]);
  }

  ASSERT_EQ(expTarget.size(),array_size); // Pushed 6 elements
  ASSERT_EQ(expTarget.top(),8);  // The highest pushed value is 8
  ASSERT_FALSE(expTarget.empty()); // it must not be empty

  //Test 3 - Pop elements of 8, 5, 4 test
  for (int i = 0; i < pop_test_count; i++)
  {
    expTarget.pop();
  }
	
  ASSERT_EQ(expTarget.top(),3); // The remained highest pushed value is 3
  ASSERT_EQ(expTarget.size(),array_size-pop_test_count); // The remained elements is array_size-pop_test_count
  ASSERT_FALSE(expTarget.empty()); // it must not empty

  //Test 4 - Pop remained elements
  for (int i = 0; i < array_size-pop_test_count; i++)
  {
    expTarget.pop();
  }
	
  ASSERT_TRUE(expTarget.empty()); // it must be empty
	
  /* Fail Example - If you activate this code, Test will be fail

  expTarget.pop();
  
  // non-Fatal Failure - not terminate this test case when result of empty method is false.
  EXPECT_TRUE(expTarget.empty()); 
  ASSERT_EQ(expTarget.size(),0);
  */
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
