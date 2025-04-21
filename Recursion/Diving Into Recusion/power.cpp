#include<bits/stdc++.h>
using namespace std;

int power(int a, int n){
    // base case
    if(n == 0){
        return 1;   // integer ki power 0 hamesha 1 hoti hai
    }

    // Recursive Case
    int smallerAns = power(a, n - 1);
    int biggerAns = a * smallerAns;

    return biggerAns;
}
int main()
{

    int a = 2, n = 3;
    cout << power(a,n) <<endl;
 return 0;
}