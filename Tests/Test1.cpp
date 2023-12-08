//============================================================================
// Name        : Test1
// Test Desc.  : <desc>
// Author      : Jeffrey Caruso
// Date    	   : Fall 2023
//============================================================================

#include <gtest/gtest.h>
#include "applib/maze.h"

#include <iostream>
#include <sstream>

using namespace std;

TEST(Test1, updateName)
{
	Maze myMaze;

}

//going to need to automate and explain something like this in gTest (for maze0)
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

//This cannot be easily split without changing the actual tests becuase they depend on each number...
