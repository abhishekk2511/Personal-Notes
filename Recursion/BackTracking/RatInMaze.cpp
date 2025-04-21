#include<bits/stdc++.h>
using namespace std;

int sol[100][100] = {0};

bool RatinMaze(char maze[][100], int i, int j, int n, int m){
    // Base Case
    if(i == n-1 and j == m - 1){   //reached cheese if this cont=dition is true , print ans
        sol[i][j] = 1;
        // print the solution
        for(int k = 0; k < n; k++){
            for(int l = 0; l < m; l++){
                cout << sol[k][l]<< " ";
            }
            cout <<endl;
        }
        cout << endl;
        return true;
    }

    // recursive Case
    // assume that i and j is the part of the solution
    sol[i][j] = 1;
    // check that maze can solve from right side
    if(j+1 < m and maze[i][j+1] != 'X') {
        bool  kyaRightSaiBaatBani = RatinMaze(maze, i, j+1, n ,m);
        if(kyaRightSaiBaatBani == true){
            return true;
        }
    }

    // check the maze from the bottom side
    if(i+1 < n and maze[i+1][j] != 'X'){
        bool KyaBottomSaiBaatBani = RatinMaze(maze, i + 1, j ,  n ,m);
        if(KyaBottomSaiBaatBani == true){
            return true;
        }
    }

    // naa right sai baat bani naa bottom sai
    sol[i][j] = 0;
    return false;

}
int main()
{
    char maze[][100] = {
        "0000",
        "00XX",
        "0000",
        "XX00",
    };

    RatinMaze(maze, 0, 0, 4,4);
     return 0;
}