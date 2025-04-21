#include<bits/stdc++.h>
using namespace std;

void wavePrint(int a[][4], int n, int m){
    // Wave Print
        // if column is even , print rows downward from 0 to n-1.  (if condition)
        //if column is odd , print row upward from n-1 to 0        (else condition)

    cout << "Wave Print : ";    

    for(int col = 0; col < m; col++){
        if(col % 2 == 0){
            for(int row = 0 ; row < n; row++){
                cout << a[row][col] << " ";
            }
        }
        else{
            for(int row = n - 1; row >= 0; row--){
                cout << a[row][col] << " ";
            }
        }
    }
}
int main(){
    int a[4][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    } ;
    
    int n = 4;
    int m = 4;

    wavePrint(a,n,m);
    // array function can call only by array name

    
    
}   