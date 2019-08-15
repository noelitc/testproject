#include "project.h"

#include <gtest/gtest.h>

TEST(test, empty)
{
  Project::Foo();
  Test()
}

int array[10];
void Fillarray()
{
	for (int i = 0; i < 10; i++)
	{
		array[i] = i;
	}
}
TEST(testArray,emptyArray) {
	
	int correctArray[] = {0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(array[i], correctArray[i]) << "position  " << i << "is incorrect";

	}
 
  EXPECT_TRUE(true);
  
}

TEST(testArray,filledArray) {
	Fillarray();
	int correctArray[] = { 1,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(array[i], correctArray[i]) << "position  " << i << "is incorrect";

	}
 
  EXPECT_TRUE(true);
  
}
