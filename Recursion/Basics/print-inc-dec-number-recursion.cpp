#include<bits/stdc++.h>
using namespace std;
int printDec(int n){
    //Base Case
    if(n == 0){
        return 1;
    }

    // recursive case
    cout << n << " ";
    printDec(n - 1);
    
}
int main()
{
    int n;
    cin >> n;

     printDec(n) ;
 return 0;
}