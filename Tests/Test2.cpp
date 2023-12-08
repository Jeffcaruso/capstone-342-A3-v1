//============================================================================
// Name        : Test2
// Test Desc.  : <desc>
// Author      : Jeffrey Caruso
// Date    	   : Fall 2023
//============================================================================

#include <gtest/gtest.h>
#include "applib/maze.h"

#include <iostream>
#include <sstream>

using namespace std;

//note / reminder:
// use EXPECT_EQ (or _NE) for std::string
// for c strings, use EXPECT_STREQ (or STRNE)
// http://google.github.io/googletest/reference/assertions.html

TEST(Test2, updateName)
{
	Maze myMaze;

}

//going to need to automate and explain something like this in gTest (for maze1)
    // Maze myMaze;

    // //don't need to loop through tests. That coverage is being done by gTest.
    // //can loop through one tho...

    // string mazeFile = "maze0.txt";
    // if (!myMaze.load(mazeFile))
    // {
    //     cerr << "Failed to load " << mazeFile << endl;
    //     return -1;
    // }
    // cout << "*** Solving " << mazeFile << endl;
    // if (myMaze.solve())
    // {
    //     cout << "Path: " << myMaze.getPath() << endl;
    // }
    // else
    // {
    //     cout << "Failed to solve: " << mazeFile << endl;
    // }
    // cout << myMaze << endl;
