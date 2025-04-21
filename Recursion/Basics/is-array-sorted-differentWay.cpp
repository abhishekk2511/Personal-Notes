#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a, int n , int i){
    //base Case
    if(i == n - 1){
        return true;
    }

    // recursive Case
    bool SmallSorted = isSorted(a, n, i + 1);
    if(SmallSorted and a[i] < a[i + 1]){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a[] = {1,4,8,9,10};
    int n = sizeof(a) / sizeof(int);
    int i = 0;
    isSorted(a, n, i);

    bool ans = isSorted(a,n,i);
    if(ans == true){
        cout << "Sorted" <<endl;
    }

    else{
        cout << "Not Sorted" <<endl;
    }

 return 0;
}
