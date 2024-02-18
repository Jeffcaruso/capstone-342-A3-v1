//============================================================================
// Name        : Test1
// Test Desc.  : Trivial testing - largely to just slightly support build validation
// Author      : Jeffrey Caruso
// Date    	   : Fall 2023
//============================================================================

#include <gtest/gtest.h>
#include "maze.h"

//using namespace std;

namespace {
    TEST(Test0, TrivialTest)
    {
        //Make LargeNum class ln
        //test the build
        Maze m();

        //always true
        EXPECT_EQ(0, 0);
    }

} // namespace

