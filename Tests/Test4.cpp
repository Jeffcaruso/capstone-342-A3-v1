//============================================================================
// Name        : Test4
// Test Desc.  : <desc>
// Author      : Jeffrey Caruso
// Date    	   : Fall 2023
//============================================================================

#include <gtest/gtest.h>
#include "applib/maze.h"

#include <iostream>
#include <sstream>

using namespace std;

TEST(Test4, updateName)
{
	Maze myMaze;
    //string mazeFile = "maze0.txt";
    string mazeFile = "data/maze3.txt";
    bool result = false;
    result = myMaze.load(mazeFile);
    if (! result)
    {
        cerr << "Failed to load " << mazeFile << endl;
        //rest of this is useless without the test file being loaded in, so exit here...
        ASSERT_TRUE(result); 
        return;
    }
    //if made it here, should pass.
    EXPECT_TRUE(result); 

    cout << "*** Solving " << mazeFile << endl;
    result = myMaze.solve();
    if (result)
    {
        EXPECT_TRUE(result);
        cout << "Path: " << myMaze.getPath() << endl;
    }
    else
    {
        //should fail here... b/c we failed to solve it.
        EXPECT_TRUE(result);
        cout << "Failed to solve: " << mazeFile << endl;
    }
    cout << myMaze << endl;

}

//going to need to automate and explain something like this in gTest (for maze3)
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

