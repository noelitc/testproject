//#include "project.h"
#include "gtest/gtest.h"
#include <string>
#include <iostream>

struct Project
{
	static void Foo()
	{
		std::cout << "hello world" << std::endl;
	}
};
TEST(test, empty)
{
	Project::Foo();
	
}


void Fillarray( int array[10])
{
	for (int i = 0; i < 10; i++)
	{
		array[i] = i;
	}
}
void Initarray(int array[10])
{
	for (int i = 0; i < 10; i++)
	{
		array[i] = 0;
	}
}
TEST(testArray, emptyArray) {

	int testArray[10];
	Initarray(testArray);
	int correctArray[] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(testArray[i], correctArray[i]) << "position  " << i << "is incorrect";

	}

	EXPECT_TRUE(true);

}

TEST(testArray, filledArray) {
	int testArray[10];
	Fillarray(testArray);
	int correctArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(testArray[i], correctArray[i]) << "position  " << i << "is incorrect";

	}

	EXPECT_TRUE(true);

}
