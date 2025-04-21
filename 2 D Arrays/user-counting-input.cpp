#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int row,col;
    cout << "Enter Row And Column" ;
    cin >> row >> col;

    //print counting array
    int val = 1;
    for(int i = 0; i < row ;i++){ 
        for(int j = 0; j< col;j++){
            // cin >>  a[i][j];
            a[i][j] = val;
             val++;
        }
    }

    // printing the array
    for(int i = 0; i < row ; i++){
        for(int j = 0 ; j < col; j++){
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }
 return 0;
}