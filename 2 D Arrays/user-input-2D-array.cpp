#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a[100][100];
    int row,col;
    cout << "Enter Row And Column" ;
    cin >> row >> col;
     
    // Taking Input From The User
    for(int i = 0; i < row ;i++){
        for(int j = 0; j< col;j++){
            cin >>  a[i][j];
        }
    }
    
    // Printing the 2D array
    for (int i = 0; i < row ;i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}