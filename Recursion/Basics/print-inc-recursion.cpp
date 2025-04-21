#include<bits/stdc++.h>
using namespace std;

void printInc(int i , int n){
    if (i == n + 1){
        return ;
    }

    // recursive case
    cout << i << " ";
    printInc(i + 1 ,n);
}
int main()
{
    int n  = 5;
    cin >> n;
    printInc(1 , n);
 return 0;
}