#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    //Base Case
    if(n == 0 || n == 1){
        return n;
    }

    // Recursive Case
    int smallerAns1 = fibo(n - 1);  //Pure Assumption
    int smallerAns2 = fibo(n - 2);  //Pure Assumption


    //find the solution
    int biggerAns = smallerAns1 + smallerAns2 ;
    return biggerAns;
}
int main()
{   
    int n;
    cin >>n;
    cout << fibo(n) << endl;
    return 0;
}   