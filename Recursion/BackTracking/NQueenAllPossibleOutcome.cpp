#include<bits/stdc++.h>
using namespace std;

bool isSafeOrNot(int b[][100], int i, int j,  int n ){
    //for row and columns
    for(int k = 0; k < n; k++){
        if(b[k][j] == 1 || b[i][k] == 1){//for checking rows and columns  (b[k][j]==1 for rows and b[i][k]==1 for column
            return false;
        }
    }

    // for Diagnol
    int k = i, l= j;

    // upper right diagnol sideA
    while(i >= 0 && j < n){
        if(b[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }

    // upper left diagnol side
    while(k >= 0 && l >=0){
        if(b[k][l] == 1){
            return false;
        }
        k--;
        l--;
    }

    return true;  //queen is good to be places return true

}

bool nQueen(int b[][100], int n , int i){
    //Base case
    if(i == n){
        //we have placed all the queen 
        // print the board
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                // cout << b[i][j] <<" ";
                (b[i][j] == 1 ? cout << "Q" << " " : cout << "_" << " ");
            }
            cout << endl;
        }
        cout <<endl;

        return false;  //this will give all the possible outcomes

    }

    // recursive Case

    for(int j = 0 ; j < n; j++){
        if(isSafeOrNot(b,i,j,n) ){

            b[i][j] = 1;   //place the queen in i and j index safe to put 
            bool forRemainingQueen  = nQueen(b,n,i+1);
            if(forRemainingQueen == 1){
                return true;
            }

            b[i][j] = 0; //backtracking 
        }
    }

    return false; //cant find the place 
}

int main()

{

    int b[100][100] = {0};
    int n ;
    cin >> n;

    nQueen(b,n,0);
 return 0;
}