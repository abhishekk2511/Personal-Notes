#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][5] = {
        {1,2,3},
        {4,5,6},
        {7,8,9,10},
        {11,12,13,14,15}
    };
    
    //Printing the 2D array
    
    int row = 4, col = 5;
    for(int  i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }
 return 0;
}