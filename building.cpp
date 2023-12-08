#include "applib/maze.h" 

int main()
{
    Maze myMaze;

    //don't need to loop through tests. That coverage is being done by gTest.
    //can loop through one tho...

    string mazeFile = "maze0.txt";
    if (!myMaze.load(mazeFile))
    {
        cerr << "Failed to load " << mazeFile << endl;
        return;
    }
    cout << "*** Solving " << mazeFile << endl;
    if (myMaze.solve())
    {
        cout << "Path: " << myMaze.getPath() << endl;
    }
    else
    {
        cout << "Failed to solve: " << mazeFile << endl;
    }
    cout << myMaze << endl;
}

