//============================================================================
// Name        : Test5
// Test Desc.  : bad maze file testing
// Author      : Jeffrey Caruso
// Date    	   : Fall 2023
//============================================================================

#include <gtest/gtest.h>
#include "maze.h"

#include <iostream>
#include <sstream>

using namespace std;

TEST(Test5, badfile)
{
	Maze myMaze;
    string mazeFile = "data/badfile.txt";
    bool result = false;
    result = myMaze.load(mazeFile);

    if(! result)
    {
        //passes
        EXPECT_FALSE(result);
    }
    else
    {
        //fails
        EXPECT_TRUE(result);
    }
}
