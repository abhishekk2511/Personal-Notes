#include<bits/stdc++.h>
using namespace std;
int tilingWays(int n){
    //Base Case
    if(n<=3){
        return 1;
    }

    //Recursive case
    return tilingWays(n-1) + tilingWays(n-4);
}
int main()
{
    int n;
    cin >> n;
    cout << tilingWays(n);
    return 0;
}