#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    //Base Case
    if(n == 0){
        return 1;
    }

    // Recursive Case/ Recursive Case
    // int smallerAns =  fact(n-1);  //(n-1) = 4! == 24

    //find the solution 

    // int biggerAns  = n * smallerAns; // 120
    // return biggerAns;


    // convenient way
    return n * fact(n-1);
}   


int main(){
    int n = 5;
    cout << fact(n) << endl;

    return 0;
}