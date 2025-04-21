#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a , int n){

    // base Case 
    if(n == 0 || n == 1){
        return true;
    }

    // Recursive Case
    bool isSmallSorted  = isSorted(a + 1 ,n - 1);


    if(isSmallSorted and a[0] < a[1]){
        return true;
    }

    
    else{
        return false;
    }
}
int main()
{
    int a[] = {1,4,6,8,9,10};
    int n  = sizeof(a) / sizeof(int);

    bool ans = isSorted(a ,n);
    if(ans == true){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not Sorted" <<  endl;
    }

 return 0;
}