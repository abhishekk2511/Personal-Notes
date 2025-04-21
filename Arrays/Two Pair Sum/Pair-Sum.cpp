#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int a[] = {1,4,5,6,8,10};
    int n = sizeof(a)/sizeof(int);

    int sum;
    cin >> sum;

    // Pair Sum
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < sum; j++){
            if(a[i] + a[j] == sum){
                cout << a[i]<< "," << a[j] <<endl;
            }
        }
    }
    return 0;
}