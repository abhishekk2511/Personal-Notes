#include<bits/stdc++.h>
using namespace std;
int stairs(int n){
    //Base Case
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }

    //recursive Case
    return stairs(n - 1) + stairs(n -2) + stairs(n - 3);
}


int Nstairs(int n, int k){
    //Base Case
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }

    //recursive Case
    int ans  = 0;
    for(int i = 0; i <= k; i++){
        ans += Nstairs(n - i, k);
    }
    return ans;
}
int main()
{
    int n = 3    ;
    cout << stairs(n)<< endl;
    cout << Nstairs(n, 3)<<endl;
 return 0;
}