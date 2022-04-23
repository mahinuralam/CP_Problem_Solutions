#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */
#include<conio.h> /*to Windows getche()*/
#include <bits/stdc++.h>

using namespace std;

//To store matrix cell coordinates
struct Point
{
    int x;
    int y;
};

// A Data Structure for queue used in BFS
struct queueNode
{
    Point pt;  // The coordinates of a cell
    int dist;  // cell's distance of from the source
};


// These arrays are used to get row and column
// numbers of 4 neighbours of a given cell
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};

//key codes
const int KEY_D = 100;
const int KEY_S = 115;
const int KEY_A = 97;
const int KEY_E = 101;
const int KEY_W = 119;

//fields
const int initial = 0;
const int wall = 1;
const int player = 2147483646;
const int monster = 2147483645;

//chars
const char playerChar = 'P';
const char monsterChar = 'M';
const char emptyChar = ' ';
const char wallChar = ':';

//moves
const int toRight = 0;
const int toDown = 1;
const int toLeft = 2;
const int toUp = 3;

//config
const int mazeSize = 20;

bool randomSeedInitialized = false;

// check whether given cell (row, col) is a valid
// cell or not.
bool isValid(int row, int col)
{
    // return true if row number and column number
    // is in range
    return (row >= 0) && (row < mazeSize) &&
           (col >= 0) && (col < mazeSize);
}
void printMaze(int maze[mazeSize][mazeSize])
{
    for (int row = 0; row < mazeSize; row++)
    {
        for (int column = 0; column < mazeSize; column++)
        {
            int field = maze[row][column];
            cout << (field == wall ? wallChar : field == monster ? monsterChar : field == player ? playerChar : emptyChar);
        }
        cout << endl;
    }
    cout << "Please enter a direction w, a, s, d or E to exit:";
}

bool isPossibleMoveTo(int maze[mazeSize][mazeSize], int moveTo, int currentRow, int currentColumn)
{
    bool isPossibleMoveTo = false;

    //TODO add the check to see if the adjacents positions are walls

    switch (moveTo)
    {
    case toRight:
        isPossibleMoveTo = currentColumn < mazeSize - 1 && maze[currentRow][currentColumn + 1] != wall;
        break;
    case toDown:
        isPossibleMoveTo = currentRow < mazeSize - 1 && maze[currentRow + 1][currentColumn] != wall;
        break;
    case toLeft:
        isPossibleMoveTo = currentColumn > 0 && maze[currentRow][currentColumn - 1] != wall;
        break;
    case toUp:
        isPossibleMoveTo = currentRow > 0 && maze[currentRow - 1][currentColumn] != wall;
        break;
    }

    return isPossibleMoveTo;
}

//TODO rename this method name (I'm not realy taking of a place and putting in another)
bool moveOnMaze(int maze[mazeSize][mazeSize], int moveTo, int field, int& currentRow, int& currentColumn, bool clearCurrent)
{
    if (!isPossibleMoveTo(maze, moveTo, currentRow, currentColumn))
    {
        return false;
    }

    bool moved = moveTo == toRight || moveTo == toDown || moveTo == toLeft || moveTo == toUp;


    if (moved)
    {
        if (clearCurrent)
        {
            maze[currentRow][currentColumn] = initial;
        }
        switch (moveTo)
        {
        case toRight:
            currentColumn++;
            break;
        case toDown:
            currentRow++;
            break;
        case toLeft:
            currentColumn--;
            break;
        case toUp:
            currentRow--;
            break;
        }
        maze[currentRow][currentColumn] = field;
    }
    return moved;
}


bool isGameEnd(int maze[mazeSize][mazeSize])
{
    return maze[mazeSize-2][mazeSize - 1] == player;
}

// function to find the shortest path between
// a given source cell to a destination cell.
int BFS(int mat[mazeSize][mazeSize], Point src, Point dest)
{
    // check source and destination cell
    // of the matrix have value 1
    // if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
    //    return -1;

    bool visited[mazeSize][mazeSize];
    memset(visited, false, sizeof visited);

    // Mark the source cell as visited
    visited[src.x][src.y] = true;

    // Create a queue for BFS
    queue<queueNode> q;

    // Distance of source cell is 0
    queueNode s = {src, 0};
    q.push(s);  // Enqueue source cell

    // Do a BFS starting from source cell
    while (!q.empty())
    {
        queueNode curr = q.front();
        Point pt = curr.pt;

        // If we have reached the destination cell,
        // we are done
        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;

        // Otherwise dequeue the front
        // cell in the queue
        // and enqueue its adjacent cells
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];

            // if adjacent cell is valid, has path and
            // not visited yet, enqueue it.d
            if (isValid(row, col) && mat[row][col]!=wall &&
                    !visited[row][col])
            {
                // mark cell as visited and enqueue it
                visited[row][col] = true;
                queueNode Adjcell = { {row, col},
                    curr.dist + 1
                };
                q.push(Adjcell);
            }
        }
    }

    // Return -1 if destination cannot be reached
    return -1;
}

void startGame(int maze[mazeSize][mazeSize])
{
    int currentRow = 0;
    int currentColumn = 0;
    int currentRow2 = 18;
    int currentColumn2 = 10;

    maze[currentRow][currentColumn] = player;
    maze[currentRow2][currentColumn2] = monster;

    printMaze(maze);

//	char keyPressed;
    int keyPressed;
    int moveTo=-1;
    int moveToMonster=-1;
    int lastMove = -1;
    bool win = true;

    while (!isGameEnd(maze))
    {
        //TODO this getche wasn't work as expected, see this
        //use wdsa for now

        //cout << endl << "-------------" << "Direction (w a s d): ";
        //cin >> keyPressed;


        keyPressed = _getche();

        if(keyPressed == KEY_E)
        {
            win=false;
            break;
        }

        switch (keyPressed)
        {
        case KEY_W://'w':
            moveTo = toUp;
            break;
        case KEY_D://'d':
            moveTo = toRight;
            break;
        case KEY_S://'s':
            moveTo = toDown;
            break;
        case KEY_A://'a':
            moveTo = toLeft;
            break;
        }
        //cout << endl << moveTo << endl;

        bool moved = moveOnMaze(maze, moveTo, player, currentRow, currentColumn, true);

        Point dest = {currentRow, currentColumn};//{0, 0};

        int dist = 2000;
        if(moved && maze[currentRow2+1][currentColumn2]!=wall && isValid(currentRow2+1, currentColumn2))
        {
            Point source = {currentRow2+1, currentColumn2};//{3, 4};
            int currentDist = BFS(maze, source, dest);
            if(dist > currentDist)
            {
                moveToMonster = toDown;
                dist = currentDist;
            }

        }
        if(moved && maze[currentRow2-1][currentColumn2]!=wall && isValid(currentRow2-1, currentColumn2))
        {
            Point source = {currentRow2-1, currentColumn2};//{3, 4};
            int currentDist = BFS(maze, source, dest);
            if(dist > currentDist)
            {
                moveToMonster = toUp;
                dist = currentDist;
            }

        }
        if(moved && maze[currentRow2][currentColumn2+1]!=wall && isValid(currentRow2, currentColumn2+1))
        {
            Point source = {currentRow2, currentColumn2+1};//{3, 4};
            int currentDist = BFS(maze, source, dest);
            if(dist > currentDist)
            {
                moveToMonster = toRight;
                dist = currentDist;
            }

        }
        if(moved && maze[currentRow2][currentColumn2-1]!=wall && isValid(currentRow2, currentColumn2-1))
        {
            Point source = {currentRow2, currentColumn2-1};//{3, 4};
            int currentDist = BFS(maze, source, dest);
            if(dist > currentDist)
            {
                moveToMonster = toLeft;
                dist = currentDist;
            }

        }
        if(moved)
        {
            bool movedd = moveOnMaze(maze, moveToMonster, monster, currentRow2, currentColumn2, true);
        }

        lastMove = moveTo;
        system("cls");
        printMaze(maze);
        if(currentRow == currentRow2 && currentColumn == currentColumn2)
        {
            win = false;
            break;
        }
    }

    if(win)
        cout << endl << " ----- Congratulations you win the match ----- " << endl;
    else
        cout << endl << " ----- Game is over ----- " << endl;

}


int main()
{
    //int maze[mazeSize][mazeSize];
    //0 = field 1 = wall
    int field = initial;
    int maze[mazeSize][mazeSize] =
    {
        {field,field,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall},
        {wall,field,wall,field,field,field,field,wall,wall,field,field,field,field,field,field,field,wall,wall,wall,wall},
        {wall,field,wall,wall,wall,wall,field,wall,wall,field,field,field,field,wall,wall,field,wall,field,field,wall},
        {wall,field,field,field,field,field,field,wall,wall,field,field,field,field,wall,field,field,field,field,wall,wall},
        {wall,wall,field,wall,wall,wall,wall,wall,wall,field,field,field,field,wall,field,wall,wall,field,wall,wall},
        {wall,field,field,field,wall,field,field,wall,wall,wall,field,wall,wall,wall,field,wall,wall,field,field,wall},
        {wall,field,wall,field,field,field,field,wall,wall,wall,field,wall,wall,wall,wall,wall,wall,wall,field,wall},
        {wall,field,wall,field,wall,wall,wall,wall,wall,wall,field,wall,wall,wall,wall,wall,wall,wall,field,wall},
        {wall,field,wall,field,field,field,field,field,field,field,field,field,wall,wall,wall,wall,field,field,field,wall},
        {wall,wall,wall,wall,wall,field,wall,wall,wall,wall,field,wall,wall,wall,wall,wall,field,field,wall,wall},
        {wall,wall,wall,wall,wall,field,wall,wall,wall,wall,field,wall,wall,wall,wall,wall,field,field,wall,wall},
        {wall,field,field,field,field,field,wall,wall,wall,field,field,field,wall,wall,wall,wall,wall,field,field,wall},
        {wall,field,field,field,field,wall,wall,wall,wall,field,field,field,field,field,field,field,wall,wall,field,wall},
        {wall,field,field,field,field,wall,wall,wall,wall,field,field,field,field,field,field,field,wall,wall,field,wall},
        {wall,field,field,field,field,wall,wall,wall,wall,field,field,field,wall,field,field,field,wall,wall,field,wall},
        {wall,wall,wall,wall,field,field,wall,wall,wall,field,field,field,wall,field,field,field,wall,wall,field,wall},
        {wall,wall,wall,wall,wall,field,wall,wall,wall,field,field,field,wall,wall,wall,wall,wall,field,field,wall},
        {wall,field,wall,field,field,field,field,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,field,wall,wall},
        {wall,field,wall,field,field,wall,field,field,field,field,field,wall,wall,wall,wall,wall,wall,field,field,field},
        {wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall,wall},
    };
    startGame(maze);
    system("pause");
    return 0;
}

